
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *const argv[])
{
    long desired_index, fibo_index, fibo_index_value, index_1, index_2;

    // we initiliaze our sequence at index 3 (value 2), because the first values of 1 will throw off the math
    fibo_index = 3;         // (counting the first index as 1) we initialize our sequence at index 3
    fibo_index_value = 2;   // correspondingly, we initialize index value as 2
    
    index_1 = 1; // hold before-last fibonacci number
    index_2 = 1; // hold current fibonacci number
    
    cout << "Enter the desired position value from the fibonacci sequence: ";
    cin >> desired_index;

    // again, the beggining numbers of the sequences, such as 0 and 1 throw off the math. In case user desires the value of indeces 0 or 2, we return them manually
    if (desired_index == 0) fibo_index_value = 0; 
    if (desired_index == 2) fibo_index_value = 1;
        
    
    for ( ; fibo_index < desired_index; fibo_index++) // while fibo index is lower than the desired index, increase index by 1
    {
        // fibonacci logic
        // shift index_1 forward to become the before-last leading number (aka fibonacci)
        index_1 = index_2; 
        // shift index_2 forward to become the leading number (aka fibonacci)
        index_2 = fibo_index_value; 
        // sum the before-last leading number, and leading number, to get the next leading number (aka fibonacci)
        fibo_index_value = index_1 + index_2; 

    }
    cout << "The value of position #" << desired_index << " is: " << fibo_index_value << endl;
    
    return 0;
}

