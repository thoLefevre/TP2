// ConsoleApplication9.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include<stdio.h>
int main()
{
	int n, i, c, T1[30], T2[30];

	printf("Entrer la taille du tableau 1: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("Entrer l'element %d :", i + 1);
		scanf("%d", &T1[i]);
	}
	c = 0;
	for (i = 0; i < n; i++) {
		if (T1[i] >= 0) {
			T2[c] = T1[i];
			c = c + 1;
		}
	}
	for (i = c; i < n; i++) {
		T2[i] = 0;
	}
	printf("\nAffichage du tableau 2 contenant les entiers positif: \n");
	for (i = 0; i < n; i++) {
		printf("%d\t", T2[i]);
	}
}