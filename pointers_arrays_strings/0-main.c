/* 0-main.c.
 * Ajout de l'inclusion de la bibliothèque stdio.h
 * Ajout de l'inclusion du fichier d'en-tête main.h
 */

#include "main.h"
#include <stdio.h>

int main(void)
{
	int n;

	n = 60;
	printf("Adresse mémoire de n : %p\n", (void *)&n);
	reset_to_98(&n);
	return 0;
}

