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
