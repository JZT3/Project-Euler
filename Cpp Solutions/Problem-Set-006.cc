/*
 The sum of the squares of the first ten natural numbers is,
              1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
            (1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten 
natural numbers and the square of the sum is 
                      3025 - 385 = 2640

Find the difference between the sum of the squares of the first
one hundred natural numbers and the square of the sum.
*/

#include <iostream>

int main() {
    int n = 100;

    // Calculate the sum of the squares
    long long sum_of_squares = (n * (n + 1) * (2 * n + 1)) / 6;

    // Calculate the square of the sum
    long long square_of_sum = (n * (n + 1)) / 2;
    square_of_sum *= square_of_sum;

    // Calculate the difference
    long long difference = square_of_sum - sum_of_squares;

    std::cout << "The difference between the square of the sum and the sum of the squares of the first "
              << n << " natural numbers is: " << difference << std::endl;

    return 0;
}

// The difference between the square of the sum and the sum of the squares
// of the first 100 natural numbers is: 25164150
