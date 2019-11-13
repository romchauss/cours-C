/*

      *
     **
    ****
   ******
  ********
 **********
************
*/

#include <stdio.h>

int main()
{
    int cpt_ligne = 5;
    int cpt_tiret = 5;
    int cpt_etoile = 1;

    while (cpt_ligne > 0)
    {
        cpt_tiret = cpt_ligne--;
        while  (cpt_tiret > 0)
        {
            printf("-");
            cpt_tiret--;
        }
        
        cpt_tiret = cpt_etoile;
        while  (cpt_tiret > 0)
        {
            printf("*");
            cpt_tiret = cpt_tiret - 1;
        }
        cpt_etoile = cpt_etoile + 2;
        printf("\n");
    }
}