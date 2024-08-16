/*
By listing the first six prime numbers: 2,3,5,7,11, and 13.
We can see that the 6th prime is 13.

What is the 10,001st prime number?
*/

#include <iostream>
#include <vector>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int number, const std::vector<int>& primes) {
    int sqrtN = static_cast<int>(std::sqrt(number));
    for (int prime : primes) {
        if (prime > sqrtN) break;
        if (number % prime == 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> primes;
    primes.push_back(2); // Start with the first prime number
    int count = 1;       // We already have one prime
    int number = 3;      // Start checking from 3

    // Loop until we find the 10,001st prime
    while (count < 10001) {
        if (isPrime(number, primes)) {
            primes.push_back(number);
            count++;
        }
        number += 2; // Only check odd numbers
    }

    // The 10,001st prime is the last element in the primes vector
    std::cout << "The 10,001st prime number is: " << primes.back() << std::endl;

    return 0;
}

// The 10,001st prime number is: 104,743