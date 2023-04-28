/*
* solution  :get_started_j
* file      :main.cpp
* created   :2023-04-21
* by        :Gunnar Gramser
*
* Try, catch, block
*
* copyright (c) 2023 G.Gramser, all rights reserved.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n";
    
    // int call_api = 2;
    // float call_api = 2.0;
    // causes unknown error
    char call_api = 'G';

    try{
        cout << "Trying to use API value.\n";
        cout << "Did sone testing with value.\n";
        // some testing / if else statement
        throw call_api;
        // code will never get executed!
        cout << "No code executed after return and throw.\n";
    } catch(int x) {
        cout << "Integer exception handled.\n";
    } catch(float y) {
        cout << "Float execption handeled.\n";
    } catch(...) { // "..." catches any unkown error
       cout << "Unkown error has occured...\n";
    }

    cout << "Keep on moving...\n";
 
    cout << "\n\n";
    return 0;
}