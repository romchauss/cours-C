/*

*
**
***
****
*****
******

*/

#include <stdio.h>
int main()
{
    int cpt_ligne = 0;
    // ce cpt est celui du nombre de lignes
    int cpt_etoile = 0;
    // ce cpt est celui du nombre d'etoiles'
    while (cpt_ligne < 4)
    {
        cpt_ligne = cpt_ligne + 1;
        cpt_etoile = cpt_ligne;
      
        while  (cpt_etoile > 0)
        {
            printf("*");
            cpt_etoile = cpt_etoile - 1;
        }
        printf("\n");
    }
}