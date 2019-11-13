/*
    faire un programme qui demande de choisir une operation a l'utilisateur + ou - ou *
    choisir un operateur
    1 +
    2 -
    3 *

    puis qui demande a l'utilisateur deux nombre (deux scanf) puis affiche le resultat du calcalcule
    
    chaque clacule devra etre fait dans sa propre fonction
*/

#include <stdio.h>

int addition(int a, int b);

int multiplication (int a, int b)
{
    return a*b;
}

int soustraction (int a, int b)
{
    return a-b;
}

int demander_nombre (void)
{
    int donner_un_chiffre;

    printf ("donnez un nombre ");
    scanf("%d" , &donner_un_chiffre );

    return (donner_un_chiffre);
}


int main ( int argc, char** argv )
{
    // déclaration et initialisation de 3
   
    char choix;

    printf("choisissez un operateur ");
    scanf("%c", &choix );

    if ( choix == '+' )
    {
        printf (" vous avez choisi %c\n", choix);
        printf ("le resultat de l'adition est :  %d", addition (demander_nombre () , demander_nombre () ));
        
    }
    else if (choix == '-')
    {
        printf ( " vous avez choisi %c\n", choix);
        printf ("le resultat de soustraction est :  %d", soustraction (demander_nombre (), demander_nombre () ));
    }
    else if  (choix == '*')
    {
        printf ( " vous avez choisi %c\n", choix);  
        printf ("le resultat de multiplication est :  %d", multiplication (demander_nombre (), demander_nombre () ));
    }
    else
    {
        printf ( " je ne connais pas l'operateur %c", choix);
        return (0);
    }
}

int addition (int a, int b)
{
    return a+b;
}
