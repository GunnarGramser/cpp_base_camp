/*
* solution  :get_started_c
* file      :main.cpp
* created   :2023-03-25
* by        :Gunnar Gramser
*
* Intergers
*
* copyright (c) 2023 G.Gramser, all rights reserved.
*/

// to avoid problems regarding ambiguity in data types
// you can use included libraries like:
#include <cstdint>
#include <iostream>
using namespace std;

int main()
{
    // 1 byte is 8 bits
    // Windows system values are different from linux / apple values
    printf("Size of data type 'int' is: %ld bits\n", sizeof(int) * 8);
    printf("Size of data type 'char' is: %ld bits\n", sizeof(char) * 8);
    printf("Size of data type 'short' int is: %ld bits\n", sizeof(short int) * 8);
    printf("Size of data type 'long int' is: %ld bits\n", sizeof(long int) * 8);
    printf("Size of data type 'long long int' is: %ld bits\n\n", sizeof(long long int) * 8);
    cout << "Avoid using these without the type:\n";
    printf("Size of data type 'long' is: %ld bits\n", sizeof(long) * 8); // same as long int
    printf("Size of data type 'long long'  is: %ld bits\n\n", sizeof(long long) * 8); // same as long long int
    cout << "With the use of the '<cstdin>' library:\n";
    printf("You can set the size of the data type like 'int16_t' is: %ld bits\n", sizeof(int16_t) * 8);
    printf("You can set the size of the data type like 'int64_t' is: %ld bits\n", sizeof(int64_t) * 8);
    printf("You can have a unsigned version of the data type like 'uint64_t' is: %ld bits\n\n", sizeof(uint64_t) * 8);
    // You can use a hexadicmal value to set a integer value by
    // defining the value as hexadecimal: 0x[value]
    int value = 0x16;
    printf("The hex value 0x16 is dec %d\n", value);
    // You can use a binary value to set a integer value by
    // defining the value as binary: 0b[binary value]
    value = 0b00010110;
    printf("The bin value 0b00010110 is dec %d\n", value);
    
    cout << "\n\n";
    return 0;
}