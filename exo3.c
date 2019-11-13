#include <stdio.h>

int main()
{
    int cpt_ligne = 5;
    int cpt_tiret = 5;

    while (cpt_ligne > 0)
    {
        cpt_tiret = cpt_ligne--;
        while  (cpt_tiret > 0)
        {
            printf("----");
            cpt_tiret--;
         printf("\n");

        }

    }
}