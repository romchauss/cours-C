#include <stdio.h>

/*
    additionne deux variables nombre entier et qui met le resultat l'adress de la variable entiere declarer dans le main
*/

void addition (int a, int b, int *resultat)
{
	*resultat = a+b ;

}

int main ()
{
	int resultat;
	
	addition (2,6,&resultat);
	printf(" %d", resultat);
}
