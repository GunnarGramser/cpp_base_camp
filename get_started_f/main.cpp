/*
* solution  :get_started_f
* file      :main.cpp
* created   :2023-03-30
* by        :Gunnar Gramser
*
* while, do ... while
*
* copyright (c) 2023 G.Gramser, all rights reserved.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n";
    int my_numbers[] = {4, 5, 6, 7, 8, 9, 0};

    // break: breaks out of the loop completely

    // continue: skips current itteration, don't 
    // foŕget to increment before 'continue' statement
    // otherwise the program gets stuck

    int i = 0;
    while (i < 7) // checks at beginning
    {
        cout << "current number is: " << my_numbers[i] << endl;
        i++;
    }
    cout << "loop done!" << endl;
    cout << "\n\n";
    
    i = 0;
    // will do the itteration once
    do
    {
        cout << "current number is: " << my_numbers[i] << endl;
        i++;
    } while (i < 7); // checks at end
    cout << "loop done!" << endl;

    cout << "\n\n";
    return 0;
}