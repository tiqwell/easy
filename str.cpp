#include "easy.h"
int itc_str(int a, int b, int c)
{
	if ((a + b > c && a + c > b && b + c > a) && (a && b && c > 0))
	{
		double p = (a + b + c) / 2;
		return itc_sqrt(p * (p - a) * (p - b) * (p - c));
	}
	return -1;
}
