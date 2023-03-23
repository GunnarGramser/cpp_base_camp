// helloworld.cpp : This file contains the 'main' function. Program execution begins and ends there.

//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}

/*
	Here i can write multi line comments!\
	Just like this here,
	and this line here
*/

// This is a single line comment

#include <cstdio>
using namespace std;

int main()						// (variable type) name() 
{								// code block begin
	puts("click on button");	// statement
	puts("create a new player");
	puts("add life to player");
	return 0;					// return value of variable type
}								// code block end


void nothing()		// void means nothing, function returns no value
{
	puts("Hello World!");
}

char iamachar()		// function must return a charcter
{
	return 'h';
}  