#include <stdio.h>
/*
	declarer et initialiser un tableau d'entier de 200 case qui prennes des valeur de raison 3 (tab[0] = 1 tab[1] = 4 tab[2] = 7 )
*/

/*
suite 
	afficher dans un boucle les case du tableau de 100 a 110

*/

void main(void)
{
	int tableau_d_entier[200];
	int compteur;
	
	compteur=1;
	tableau_d_entier[0] = 1;
	

	while ( compteur <200 )
	{	
	
		tableau_d_entier[compteur] = tableau_d_entier[compteur - 1] + 3;
	
		compteur++;
		// compteur = compteur + 1;
		
	}
	compteur = 100;
	while ( compteur <= 110 ) 
	{ 
		printf("compteur: %d\n", compteur);
		printf("valeur: %d\n", tableau_d_entier[compteur]);	

        compteur++;
	}
	
	
	printf("--------------------------------\n");
	printf("tableau case 100 : %d\n", tableau_d_entier[100]);
	printf("tableau case 110 : %d\n", tableau_d_entier[110]);
	printf("--------------------------------\n");
	
	
	
	
}