/*
* solution  :get_started_h
* file      :main.cpp
* created   :2023-07-04
* by        :Gunnar Gramser
*
* for, forrange / foreach shorthand notations
*
* copyright (c) 2023 G.Gramser, all rights reserved.
*/

#include <iostream>
using namespace std;

int main()
{    
    // 'normal' definition of array
    /* 
        NOTE: 
        By convention, the end of strings represented in character sequences 
        is signaled by a special character: the null character, whose literal 
        value can be written as '\0' (backslash, zero) or simply 0.
    */
    char my_name[] = {'G', 'u', 'n', 'n', 'a', 'r', 0};
    printf("My name is: %s\n", my_name);
    std::cout << "---looping using a normal array\n";
    for (int i = 0; my_name[i] != 0; i++) {
        std::cout << "Character is: " << my_name[i] << endl;
    }

    std::cout << "---\n";
    // make a character array as a string (collection of char's)
    char my_string[] = "Gunnar";    // note: no zero written at the end
    printf("My name is: %s\n", my_string);
    std::cout << "---looping using the zero check for string\n";
    // you can still use the check for a zero! 
    // to find the end of the string
    for (int i = 0; my_string[i] != 0; i++) {
        std::cout << "Character is: " << my_string[i] << endl;
    }

    std::cout << "---looping using simplyfied 0 check\n";
    // here the array != 0 check is done by knowing that all the non-zero 
    // values are true, so if the value is zero the condition is true
    for (int i = 0; my_string[i]; i++) {
        std::cout << "Character is: " << my_string[i] << endl;
    }

    std::cout << "---looping using the character pointers\n";
    // looping using the character pointers 
    for (char *cp = my_name; *cp != 0; cp++) {
        std::cout << "Character is: " << *cp << endl;
    }

    std::cout << "---looping using a for each loop\n";
    // looping using a for each loop, will show the zero character
    // line at the end, if you don't add a condition
    for (char i:my_name) {
        if (i != 0)
        {
            std::cout << "Character is: " << i << endl;
        }
    }

    std::cout << "\n\n";
    return 0;
}