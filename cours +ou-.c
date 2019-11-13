
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ( int argc, char** argv )
{
    // déclaration et initialisation de 2 var
    int nombreMystere = 0, nombreEntre = 0;
    
    // constante est une variable non modiffiable
    const int MAX = 100, MIN = 1;

    // Génération du nombre aléatoire entre MAX et MIN

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */
    do
    {
        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);

        // On compare le nombre entré avec le nombre mystère

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
        if (abs(nombreEntre - nombreMystere) < 10 && nombreEntre - nombreMystere != 0)
            printf("presque\n");
    } while (nombreEntre != nombreMystere);
    
    return 0;
}