/*
* solution  :get_started_i
* file      :main.cpp
* created   :2023-04-17
* by        :Gunnar Gramser
*
* Floats, caution when using them
*
* copyright (c) 2023 G.Gramser, all rights reserved.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n";

    /* 
        Note: the size of the types 
        can vary based on the system
    */
    printf("float size is %ld bits\n", sizeof(float) * 8);
    printf("double size is %ld bits\n", sizeof(double) * 8);
    printf("long double size is %ld bits\n", sizeof(long double) * 8);

    cout << "\n\n";
    
    float my_exact_val = 20.2 + 20.2;

    // watch the precision!
    // the actual value is: 40.4000015258789060000...
    if (my_exact_val == 40.400002) // this wont work!
    {
        puts("You got it right!"); 
    } else {
        puts("Some other value...");
    }

    printf("My exact value is: %1.30f in float\n", my_exact_val);

    cout << "\n\n";
    return 0;
}