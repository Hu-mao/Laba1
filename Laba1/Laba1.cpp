// example1.cpp 
//#include <math.h>
//const float LEFT = 0, RIGHT = 4, TABUL = 0.1;
//float fun1(float farg)
//{
//	float ftemp = 0;
//	int ni;
//	for (ni = 1; ni <= 5; ni = ni + 1)
//		ftemp = ftemp + sqrt((farg + ni) /
//			ni);
//	return ftemp;
//}
//float fun2(float farg)
//{
//	float ftemp = log(2 * farg *
//		farg) + 3 * sin(farg);
//	return ftemp;
//}
//void main()
//{
//	float fx = LEFT;
//	float fy;
//	while (fx <= RIGHT)
//	{
//		if (fx <= 2)
//			fy = fun1(fx);
//		else fy = fun2(fx);
//		fx = fx + TABUL;
//	}
//}

// example2.cpp 
void swap(int& num1, int& num2)
{
	int tmp;
	tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void init(int mas[], int size)
{
	for (int i = 0; i < size; i = i + 1)
		mas[i] = i + 100;
}
int main()
{
	int a = 5, b = 6;
	swap(a, b);
	const int N1 = 10;
	int mas1[10];
	init(mas1, N1);
	const int N2 = 100;
	int mas2[100];
	init(mas2, N2);
	return 0;
}