#include <stdio.h>

void main(void)
{
       
 int cpt ;
 int nombre ;

   nombre = 1;
   while( nombre <= 12)
  {  
    
      cpt = 0;

     while (cpt < nombre)
    {

        printf ("*");
        cpt ++;


       }

    printf ("\n");
    nombre ++;


  }

}


