// Problem1-2-2_SumOfAbsoluteValues.c : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	double a;
	scanf("%lf", &a);
	double b;
	scanf("%lf", &b);
	double c;
	scanf("%lf", &c);
	double sum = 0.;
	double absolute;
	absolute = FindAbsoluteValue(a);
	sum += absolute;
	absolute = FindAbsoluteValue(b);
	sum += absolute;
	absolute = FindAbsoluteValue(c);
	sum += absolute;
	printf("%lf", sum);
    return 0;
}

