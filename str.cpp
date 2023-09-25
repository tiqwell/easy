int itc_sqrt(int num)
{
	int a = -1;
	for (int i = 1; i < num; i++)
	{
		if (i * i == num)
			a = i;
	}
	if (num == 1)
		a = 1;
	else if (num == 0)
		a = 0;
	return a;
}
int itc_str(int a, int b, int c)
{
	if ((a + b > c && a + c > b && b + c > a) && (a && b && c > 0))
	{
		double p = (a + b + c) / 2;
		return itc_sqrt(p * (p - a) * (p - b) * (p - c));
	}
	return -1;
}
