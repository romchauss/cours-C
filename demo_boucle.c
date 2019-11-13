#include <stdio.h>

void main(void)
{

	int nombre_entier;
// Je déclare un entier - ce qui attribue à ce nbre ent automatiquement une adresse ds la memoire
	int tableau_d_entier[4];
// je déclare un tableau de nombres entiers de 4 nombre_entier
	int compteur;
// on déclare une variable entiere 
	nombre_entier = 5;
// veut dire que je met la valeur 5 dans la variable nombre_entier: initialisation
	compteur = 0;
//  Initialisation de la variable à 0
	
	while (compteur < 4)
	{
//  Tant que la variable compteur est égal à 4
		printf("la variabke compteur vaut %d\n", compteur );
//  Affiche dans le terminal : "la variabke compteur vaut %d\n" 
//		en remplacant %d par la valeur de la variable compteur
		printf("donne moi une valeur : ");
//	Printf affiche un texte dans le terminal
		scanf("%d", &nombre_entier);
//	On attend une valeur de l'utilisateur que l on va stocker à l adresse de nombre entier 
		tableau_d_entier[compteur] = nombre_entier;
// initialise une variable du tableau d entier 
//		qui corresponda a la valeur de la variable compteur qui commence ici à 0 mais qui va varier
		compteur ++;
//	cette ligne additionne 1 à la valeur de compteur = incrementer
	}
	
/*	
	tableau_d_entier[0] = 5;
	tableau_d_entier[1] = 1020;
	tableau_d_entier[2] = 90.5;
	tableau_d_entier[3] = 11;
*/

	printf(" %d", tableau_d_entier[0]);
//	affiche la variable de la case du tableau numero 0
	printf(" %d", tableau_d_entier[1]);
//	affiche la variable de la case du tableau numero 1
	printf(" %d", tableau_d_entier[2]);
//	affiche la variable de la case du tableau numero 2
	printf(" %d", tableau_d_entier[3]);
//  affiche la variable de la case du tableau numero 3
	
}