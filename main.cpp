
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *const argv[])
{
    long seeked_index, fibo_index, fibo_index_value, index_1, index_2;
    
    fibo_index = 3; // (counting the first index as 1) we initialize our sequence at index 3
    fibo_index_value = 2; // correspondingly, we initialize index value as 2
    
    index_1 = 1; // hold before-last fibonacci number
    index_2 = 1; // hold current fibonacci number
    
    cout << "Enter the seeked position value from the fibonacci sequence: ";
    cin >> seeked_index;
    
    if (seeked_index == 0) fibo_index_value = 0; // prevent loop from running if seeked index is 0 or 2
    if (seeked_index == 2) fibo_index_value = 1;
        
    
    for ( ; fibo_index < seeked_index; fibo_index++) // while fibo index is lower than the seeked index, increase index by 1
    {
        // fibonacci logic
        index_1 = index_2; // shift index_1 forward to become the before-last leading number (aka fibonacci)
        index_2 = fibo_index_value; // shift index_2 forward to become the leading number (aka fibonacci)
        fibo_index_value = index_1 + index_2; // sum the before-last leading number, and leading number, to get the next leading number (aka fibonacci)

    }
    cout << "The value of position #" << seeked_index << " is: " << fibo_index_value << endl;
    
    return 0;
}

