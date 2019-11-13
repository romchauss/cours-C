/*
le programe doit afficher:

*
**
***
****
*****

 
*/

#include <stdio.h>



void main(void)
{
	//déclaration de la variable 
	int cpt ;
	int nombre ;
	
	/* intitialisation de la variable
	*/
	nombre = 1;
	while(nombre <= 12)
	{
		cpt = 0;
		
		/*nombre = 2 ;
		nombre = 3 ;
		nombre = 4 ;
		nombre = 5;
		*/
		
		while(cpt < nombre)
		{
			// afficher  une etoile
			printf("*");
			cpt++;
			
		}
		
		// sauter la ligne
		printf("\n");
		nombre ++;
		
		
	}
}