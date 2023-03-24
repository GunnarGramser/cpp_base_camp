
/*
* solution  :get_started_b
* file      :main.cpp
* created   :2023-03-24
* by        :Gunnar Gramser
*
* Arrays, the CPP way...
* 
* copyright (c) 2023 G.Gramser, all rights reserved.
*/

#include <iostream>
using namespace std;

int main()
{
	// newer cpp syntax
	int integer_array[4] = {1, 2, 3, 4};	// type name[size] = { ...values... };
	cout << integer_array[0] << endl;

	int other_array[4];	// init the array
	other_array[0] = 9;	// set position 0 of array to the value 9
	cout << other_array[0] << endl;
	cout << other_array[1] << endl; // not set a value yet

	*other_array = 29;	// points to the first position of the array
	cout << other_array[0] << endl;

	other_array[1] = 19;
	cout << other_array[1] << endl;
	int* array_pointer = other_array;	// points to the first position of the array
	array_pointer++;	// increases the pointer by one to point to
						// the next position in the array
	*array_pointer = 209;	// set value on address of 'array_pointer' to 209
	cout << other_array[1] << endl;

	cout << "\n\n";
	return 0;
}
