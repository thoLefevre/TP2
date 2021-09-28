// ConsoleApplication8.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t[100];
	int i, n, max, min;
	printf("Donnez le nombre des element du tableau:\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Donnez l'element %d:\n", i + 1);
		scanf("%d", &t[i]);
	}
	
	min = t[0];
	max = t[0];
	for (i = 0; i < n; i++)
	{
		printf("%d ", t[i]);
		if (t[i] > max) max = t[i];
		if (t[i] < min) min = t[i];
	}
	printf("\n");
	printf("Le max est: %d\n", max);
	printf("Le min est: %d\n", min);
	return 0;
}


