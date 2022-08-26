// bt9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include<conio.h>
int* ptr;
char temp;
void inmang(int a[])
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
}
void tangdan(int a[])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			if (*(ptr + i) > *(ptr + j))
			{
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
		
	}
	for (int i = 0; i < 5; i++)
	{
		printf("Gia tri cac phan tu a[%d] : %d\n", i, *(ptr + i));
	}

}
void giamdan(int a[])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			if (*(ptr + i) < *(ptr + j))
			{
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}

	}
	for (int i = 0; i < 5; i++)
	{
		printf("Gia tri cac phan tu a[%d] : %d\n", i, *(ptr + i));
	}

}
int main()
{
	int a[] = { 1,3,5,7,9 };
	ptr = a;
	inmang(a);
	giamdan(a);
	tangdan(a);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
