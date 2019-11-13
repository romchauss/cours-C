/*

*****
****
***
**
*

*/

#include <stdio.h>

int main()
{
    int compteur = 5;
    int compteur2 = 5;

    while (compteur > 0)
    {
        compteur2 = compteur--;
        while  (compteur2 > 0)
        {
            printf("*");
            compteur2--;
        }
        printf("\n");
    }
}