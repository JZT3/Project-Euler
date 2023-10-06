'''
If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3,5,6, and 9. The sum of these multiples is 23. 

Find the sum of all the multiples of 3 or 5 below 1000.
'''

import math

def lcm(a: int, b: int) -> int:
    """Calculate the least common multiple of a and b."""
    return a * b // math.gcd(a, b)

def sum_of_multiples_of_n(n: int, limit: int) -> int:
    """Calculate the sum of multiples of n below the limit."""
    num_terms = (limit - 1) // n  # number of terms in the series
    # sum of arithmetic series
    return n * num_terms * (num_terms + 1) // 2  

def sum_of_multiples(limit: int, multiple1: int, multiple2: int) -> int:
    """Calculate the sum of multiples of multiple1 and multiple2 below the limit."""
    # Sum of multiples of multiple1 and multiple2
    sum_multiples = sum_of_multiples_of_n(multiple1, limit) + sum_of_multiples_of_n(multiple2, limit)
    # Subtract sum of multiples of their LCM to avoid double-counting
    return sum_multiples - sum_of_multiples_of_n(lcm(multiple1, multiple2), limit)

print(sum_of_multiples(1000, 3, 5))


