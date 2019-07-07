#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>
#include<Windows.h>

/*1 
  1 1
  1 2 1
  1 3 3 1
  1 4 6 4 1
*/
#define max 10
void sanjiao(int arr[][max]) {
	for (int i = 0; i <max; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (j == 0||i==j) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
}



void printangle(int arr[][max]) {
	for (int i = 0; i <max ; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%-3d",arr[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	int arr[max][max] = {0};
	sanjiao(arr);
	printangle(arr);
	system("pause");
}