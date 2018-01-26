// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


using namespace std;

void myfunc(float & x, char c)
{
	printf("Enter: %c: ", c);
	cin >> x;
}


int main()
{
	float a = 6.03f, b = 10.15f, x = 5.22f;


	myfunc(a, 'a');
	myfunc(b, 'b');
	myfunc(x, 'x');

	double y = 1.0 / (2.0 * a)* log(fabs((x * x + a * a) / (b - x)));

	printf("Result: %.5f\n", y);
	getchar();
	return 0;
}