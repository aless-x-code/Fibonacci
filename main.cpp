
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *const argv[])
{
    long seeked_index, fibo_index, fibo_index_value, index_1, index_2;
    
    fibo_index = 3; // (counting the first index as 1) we initialize our sequence at index 3
    fibo_index_value = 2; // correspondingly, we initialize index value as 2
    
    index_1 = 1; // holds the before-last fibonacci number
    index_2 = 1; // hold the current fibonacci number
    
    cout << "Enter the seeked position value from the fibonacci sequence: ";
    cin >> seeked_index;
    
    // fail safe
    if (seeked_index == 1) fibo_index_value = 1;
    
    // while the position is lower than position given..
    for ( ; fibo_index < seeked_index; fibo_index++)
    {
        // fibonacci logic
        index_1 = index_2; // shift index_1 forward to become the before-last leading number (aka fibonacci)
        index_2 = fibo_index_value; // shift index_2 forward to become the leading number (aka fibonacci)
        fibo_index_value = index_1 + index_2; // sum the before-last leading number, and leading number, to get the next leading number (aka fibonacci)

    }
    cout << "The value of position #" << seeked_index << " is: " << fibo_index_value << endl;
}

