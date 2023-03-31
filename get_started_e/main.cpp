/*
* solution  :get_started_e
* file      :main.cpp
* created   :2023-03-30
* by        :Gunnar Gramser
*
* switch, case
*
* copyright (c) 2023 G.Gramser, all rights reserved.
*/

#include <iostream>
using namespace std;

int main()
{
    int rating = 3;
    switch(rating){
        case 1:
            puts("rated as 1 star");
            break;
        case 2:
            puts("rated as 2 stars");
            break;
        case 3:
            puts("rated as 3 stars");
            break;
        case 4:
            puts("rated as 4 stars");
            break;
        case 5:
            puts("rated as 5 stars");
            break;
        default:
            puts("rating was not valid...");
            break;
    }

    cout << "\n\n";
    return 0;
}