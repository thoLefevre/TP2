// ConsoleApplication6.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Donnez 3 entiers:\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a >= b && a >= c)
	{
		if (b >= c) printf("%d %d %d\n", c, b, a);
		else printf("%d %d %d\n", b, c, a);
	}

	if (b >= a && b >= c)
	{
		if (a >= c) printf("%d %d %d\n", c, a, b);
		else  printf("%d %d %d\n", a, c, b);
	}

	if (c >= a && c >= b)
	{
		if (a >= b) printf("%d %d %d\n", b, a, c);
		else printf("%d %d %d\n", a, b, c);
	}
	system("pause");
	return 0;
}
// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
