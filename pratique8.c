/*

*
**
****
*****
*******
********
**********
***********
*/

#include <stdio.h>

int main()
{
    int compteur = 0;
    int compteur2 = 0;

    while (compteur < 14)
    {
        compteur2 = compteur++;

        if (compteur % 3 == 0)
        {
            compteur = compteur + 1;
        }

        while  (compteur2 > 0)
        {
            printf("*");
            compteur2--;
        }
        printf("\n");
    }
}