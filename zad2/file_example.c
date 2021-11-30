#include <stdio.h>

struct tim {
	char ime[20];
	int broj_bodova;
	int broj_golova;

};
int main (void)
{
	FILE *my_stream;
	FILE *read_stream;
	struct tim tabela[3];
	//milan.ime="nesto";
	tabela[0].broj_bodova = 10;
	tabela[0].broj_golova = 5;

	tabela[1].broj_bodova = 2;
	tabela[1].broj_golova = 0;
	char niz[5]= {1, 2, 3, 4, 5};
	char read_niz[5];

	struct tim tabela_read;

	my_stream = fopen("tekst", "w");

	if (my_stream == NULL)
	{
		printf ("fajl ne postoji\n");
	}
	else
	{
		fwrite(&tabela, sizeof(struct tim), 3, my_stream);
		printf("fajl otvoren: sad ga zatvaramo");
		fclose(my_stream);
	}
	
	read_stream = fopen("tekst", "r");
	if (read_stream == NULL)
	{
		printf ("fajl koji citamo ne postoji\n");
	}
	else
	{
		printf("\nfajl koji citamo otvoren: sad ga zatvaramo\n");
		fread(&tabela_read, sizeof(struct tim), 3, read_stream);
		printf("\nclanovi niza su:");
		printf("\nbroj_bodova: %d\n", milan_read.broj_bodova);
		printf("\nbroj_golova: %d\n", milan_read.broj_golova);
		fclose(my_stream);
	}
	
	return 0;

}
