/*
* solution  :fav_color
* file      :main.cpp
* created   :2023-03-19
* by        :Gunnar Gramser
*
* copyright (c) 2023 G.Gramser, all rights reserved.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string myColor;
	cout << "Enter your favorite color: ";
	getline(cin, myColor);
	cout << "\nHey " << myColor << " is my favorite too." << endl;

	cout << "\n";
	return 0;
} 