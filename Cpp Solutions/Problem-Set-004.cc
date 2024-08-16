// Find the largest palindrome made from the product of two 3-digit numbers.

#include <string>
#include <algorithm>
#include <iostream>

// Function to check if a number is a palindrome
bool is_palindrome(int number) {
    std::string str_number = std::to_string(number);
    std::string reversed_str_number = str_number;
    std::reverse(reversed_str_number.begin(), reversed_str_number.end());
    return str_number == reversed_str_number;
}

// Function to find the largest palindrome made from the product of two 3-digit numbers
int largest_palindrome_product() {
    int max_palindrome = 0;  // variable to hold the maximum palindrome found
    int max_i = 0, max_j = 0;  // variables to hold the numbers that produce the maximum palindrome

    // Iterate from 999 to 100 in descending order
    for (int i = 999; i > 99; --i) {
        // Iterate from i to 100 in descending order
        for (int j = i; j > 99; --j) {
            int product = i * j;

            // If the product is less than the current maximum palindrome, no need to check further
            if (product <= max_palindrome) {
                break;
            }

            // If the product is a palindrome and is greater than the current maximum, update the maximum
            if (is_palindrome(product)) {
                max_palindrome = product;
                max_i = i;
                max_j = j;
            }
        }
    }

    std::cout << "The numbers are: " << max_i << " and " << max_j << std::endl;
    std::cout << "Their product is: " << max_palindrome << std::endl;
    return max_palindrome;
}

int main() {
    // Find and print the largest palindrome product
    largest_palindrome_product();
    return 0;
}
