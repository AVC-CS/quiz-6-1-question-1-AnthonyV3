#include <iostream>

// Function to get two integer values from the user
void getTwoValues(int &begin, int &end) {
    do {
        std::cout << "Enter two integer values (begin < end): ";
        std::cin >> begin >> end;
    } while (begin >= end);
}

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // 1 is not prime
    if (n <= 3) return true; // 2 and 3 are prime

    // Check divisibility by numbers up to the square root of n
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false; // If n is divisible by i, it's not prime
    }

    return true; // If not divisible by any smaller number, then it's prime
}

// Function to get the next prime number after a given number
int getNextPrime(int begin) {
    int next = begin + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

// Function to get the previous prime number before a given number
int getPrevPrime(int end) {
    int prev = end - 1;
    while (!isPrime(prev)) {
        prev--;
    }
    return prev;
}
