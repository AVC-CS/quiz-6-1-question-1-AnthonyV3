#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // 1 is not prime
    if (n <= 3) return true; // 2 and 3 are prime

    // Check if the number is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Check divisibility by numbers of the form 6k ± 1 up to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true; // If not divisible by any smaller prime, then it's prime
}

// Function to get the next prime number after a given number
int getNextPrime(int n) {
    int next = n + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

// Function to get the previous prime number before a given number
int getPrevPrime(int n) {
    int prev = n - 1;
    while (!isPrime(prev)) {
        prev--;
    }
    return prev;
}

// Function to get two integer values from the user
void getTwoValues(int &a, int &b) {
    cout << "Enter two integer values: ";
    cin >> a >> b;
}

#endif
