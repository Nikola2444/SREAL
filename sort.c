#include "sort.h"

void bubble_sort(int* niz, int num_of_elements)
{
	int i,j;
	int temp;
	for (i = 0; i < num_of_elements -1; i++)
		for (j = 0; j< num_of_elements-1; j++)
			if (niz[j]> niz[j+1])
			{
				temp = niz[j];
				niz[j]=niz[j+1];
				niz[j+1]=temp;
			}
}
	
