/*
* solution  :get_started
* file      :main.cpp
* created   :2023-03-21
* by        :Gunnar Gramser
*
* copyright (c) 2023 G.Gramser, all rights reserved.
*/

#include <iostream>
using namespace std;

int main()
{
	// const int life = 4;
	// prefix the int declaration with a "qualifier" 
	// of "const" makes it's a constant value

	int life;
	life = 4;

	int card;
	card = 40;
	int my_card = card;

	// With pointer
	int *my_pointer;		// declare the pionter with the `*`
	my_pointer = &card;		// use a `&` sign to point to the memory location
							// you can piont to a variables memory address

	printf("value of card is: %d\n", my_card);
	printf("value of pointer to card is: %p\n", my_pointer);	// for a pointer (my_pointer)
																// you use `%p` to dispay it
	my_card = *my_pointer;	// this is called a `pointer dereferece`, get the
							// value of my_pointer
	printf("value of the dereferenced card is: %d\n", my_card);

	cout << "\n\n";
	return 0;
}
