// stdafx.cpp : source file that includes just the standard includes
// Problem1-2-2_SumOfAbsoluteValues.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file


double FindAbsoluteValue(double number)
{
	double absolute;
	absolute = number >= 0. ? number : -number;
	return absolute;
}

