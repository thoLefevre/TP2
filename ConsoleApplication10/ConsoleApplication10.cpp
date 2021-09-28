// ConsoleApplication10.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main() {
	int i, nbr, somme;
	int tab[30];

	printf(" Entrez le nombre d'elements dans le tableau: ");
	scanf("%d", &nbr);

	printf(" Entrez les elements du tableau: ");
	for (i = 0; i < nbr; i++)
		scanf("%d", &tab[i]);

	somme = 0;
	for (i = 0; i < nbr; i++)
		somme = somme + tab[i];

	printf(" La somme = %d", somme);

	return (0);
}