# Fibonacci_Order_of_N

This program asks user to input a seeked position from the fibonacci sequence, it then calculates and prints that position.

Program performance is of O(n).
Specifically, the program calculates each fibonacci number by re-assigning 3 variables, index_1 holds the before-last number, index_2 holds the leading number (aka fibonacci), and fibo_index_value adds index_1 and index_2, which is the new fibonacci number. 
Thereafter, index_1 becomes index_2 (which is now the before-last number), index_2 becomes fibo_index_value (now the leading number), and fibo_index_value adds index_1 and index_2 for the next fibonacci number.

**Example**:

1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89  – Fibonacci sequence
1, 2, 3, 4, 5, 6, 7,  8,  9,  10, 11  – Fibonacci index

index_1 = 13
index_2 = 21
fibo_index_value = 34

// loop

index_1 = 21 // re-assign as index_2
index_2 = 34 // re-assign as fibo_index_value
fibo_index_value = 55 // add index_1 and index_2

