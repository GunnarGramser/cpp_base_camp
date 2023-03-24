
/*
* solution  :get_started_a
* file      :main.cpp
* created   :2023-03-22
* by        :Gunnar Gramser
*
* copyright (c) 2023 G.Gramser, all rights reserved.
*/

#include <iostream>
using namespace std;

int main()
 {
	int score = 200;
	int *my_pointer = &score;
	printf("Score is: %d\n", score);
	printf("Pointer is: %p\n", my_pointer);

	int &other_score = score;
	other_score = 800; // shanges the value of score
	printf("\nScore is: %d\n", score);
	printf("Other score is: %p\n", my_pointer); // points to same address

	/*
		Any change to a reference also changes the actual value of the variable
		it points to!
	*/

	cout << "\n\n";
	return 0;
}
