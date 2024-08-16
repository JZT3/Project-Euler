/* 2520 is the smallest number that can be divided by each of the numbers from 
1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the
numbers from 1 to 20? */

#include <iostream>

// Function to calculate the Greatest Common Divisor (GCD) using Euclid's algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the Least Common Multiple (LCM)
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int result = 1;
    
    // Find LCM of numbers from 1 to 20
    for (int i = 2; i <= 20; ++i) {
        result = lcm(result, i);
    }
    
    std::cout << "The smallest positive number that is evenly divisible by all"
                  " of the numbers from 1 to 20 is: " << result << std::endl;
    return 0;
}

// The smallest positive number that is evenly divisible by all of the
// numbers from 1 to 20 is: 232792560