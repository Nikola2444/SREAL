#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
int main (int argc, char** argv)
{
int i = 0;
int niz[20];
	printf ("\nniz pre sortiranja: ");
	for (i = 1; i < argc; i++)
	{
		niz[i-1] = atoi(argv[i]);
		printf("%d ", niz[i-1]);
	}
	bubble_sort(niz, argc-1);
	printf ("\nniz nakon sortiranja: ");
	for (i = 1; i < argc; i++)
	{
		printf("%d ", niz[i-1]);
	}
	return 0;
}
