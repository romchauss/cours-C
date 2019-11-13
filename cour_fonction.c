#include <stdio.h>

/*
    additionne deux variables nombre entier et qui met le resultat dans une troisieme variable entiere
*/

 int addition (int a, int b)
 {
    return a+b;
 }

int main ()
{
	int resultat;
	
	resultat = addition (2,6);
	printf(" %d", resultat);
}
