// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;
#define L cout 

int main()
{
	int t; //right answer
	int num; //user's answer
	int a; //the number1
	int n; //
	int i; //question number
	int b;//the number2
	int score=0;
	L << "welcome to the weekly psychological test";

	srand(time(NULL));
	for (i = 1;1 <= 1;i++)
	{
	loop: a = rand() % 50;
		b = rand() % 50;
		n = rand() % 6;
		if ((n == 0 || n == 1 || n == 2) && (a + b) > 50
		{if (a > 25 && b > 25)
		{
			a = a - 25;
			b = b - 25;
		}
		if (a > 25)
			a = a - 25;
		if (b > 25)
			b = b - 25;
		switch(n)
		{ }
		}
	}
    return 0;

}

