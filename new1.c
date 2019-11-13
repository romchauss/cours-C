#include <stdio.h>
/*
	une fonction qui prend trois parametre entier et qui renvoie un seul entier
*/

/*
	int regulation (float vitesse_brochef,float vitesse_avance_metre_min );

	Fonction posant les limites de rotation broche et avance broche

	valeur renvoyer
	rotation broche 3000 a 23999 true 24000 et infini false
	avance boche 0.2 metre a 1metre minute true 1.01 mere et infini false

	Si un des deux parametres est faux alors on renvoie 0 sinon on renvoi 1
*/

int regulation (float vitesse_broche,float vitesse_avance_metre_min )
{
	if ( vitesse_broche > 23999 || vitesse_avance_metre_min > 1.01 )
	{
		return 0;
	}
	
	return 1;
}

int triple(int nombre)
{
    int resultat = 0;

    resultat = 3 * nombre;  // On multiplie le nombre fourni par 3
    return resultat;       // On retourne la variable resultat qui vaut le triple de nombre
}

void main()
{
	int retour;

	retour = triple(5);
	if(regulation(50,0.1))
	{
		printf("la vitesse est valide");
	}
	else
	{
		printf("pas valide");
	}
	
}

