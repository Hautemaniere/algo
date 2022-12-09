#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main(int argc, char ** argv)
{
	FILE* fichier = fopen("./source.txt", "r");

	if (fichier != NULL)
	{
		// L'ouverture du fichier a réussie.

		char c;

		do {

			c = (char)getc(fichier);

			printf("%c", c);

		} while (c != EOF);


		printf("\n");


		if (fclose(fichier) == 0) {

			printf("Fermeture reussie\n");
		}
		else {

			printf("Echec de fermeture du fichier \n");
		}

		fclose(fichier);
	}

	else {

		printf("L'ouverture du fichier a echouee !\n");

	}

	return 0;
}

