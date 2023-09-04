int itc_sqrt(int num)
{
	int a = -1;
	for(int i = 1; i <num ; i++)
	{
		if (i * i == num)
			a = i;
	}
	return a;
}