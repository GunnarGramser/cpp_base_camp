/*
* solution  :get_started_g
* file      :main.cpp
* created   :2023-03-31
* by        :Gunnar Gramser
*
* for ... next
*
* copyright (c) 2023 G.Gramser, all rights reserved.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n";
    int my_numbers[] = {2, 3, 4, 5, 6};

    for(int i = 0; i < 5; i++)
    {
        cout << my_numbers[i] << endl;
    }
    cout << "\nget a break...\n" << endl;
    
    // forrange / foreach
    // for each value 'i' in my_numbers do...
    for(int i : my_numbers)
    {
        cout << i << endl;
    }
    
    cout << "\n\n";
    return 0;
}