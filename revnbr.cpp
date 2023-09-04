int itc_revnbr(int num)
{
	int sot = num / 100;
	int des = num % 100 / 10;
	int ed = num % 100 % 10;
	return ed * 100 + des * 10 + sot;
}