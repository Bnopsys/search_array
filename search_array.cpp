/*
The goal of this project is to locate the index of a value in an array.
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

char test_array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2'};

int main(int argc, char* argv[])
{
    char input_char = argv[1][0];

    int found_val = 0;
    for (int index = 0; index < strlen(test_array); index++)
    {
        
        if (input_char == test_array[index])
        {    
            cout << index;
            found_val = 1;
        }
    }
    
    if (found_val == 0)
    {
        cout << "Input not in array. Please input lowercase a-z, 1, 2.\n";
    }

}