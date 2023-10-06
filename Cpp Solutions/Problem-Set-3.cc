#include <iostream>

// Function to find the largest prime factor of a given number
int largest_prime_factor(long long n) {
    // Step 1: Initialize
    long long current = n;
    
    // Step 2: Divide by 2 until it's no longer divisible
    while (current % 2 == 0) {
        current /= 2;
    }
    
    // Step 3 and 4: Check odd numbers starting from 3
    long long divisor = 3;
    while (divisor * divisor <= current) {
        // Divide current by divisor while it's divisible
        while (current % divisor == 0) {
            current /= divisor;
        }
        // If current becomes 1, break
        if (current == 1) {
            break;
        }
        // Move to the next odd divisor
        divisor += 2;
    }
    
    // Step 5: Return the result
    // If current is not 1, it's the largest prime factor, otherwise, it's divisor
    return (current != 1) ? current : divisor;
}

int main() {
    // Find the largest prime factor of the given number
    std::cout << largest_prime_factor(600851475143LL) << std::endl;
    return 0;
}
