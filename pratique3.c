//si x est impaire on enleve 1 a y 
//si y est inferieur 400 x vaut 50
//si x - y + 5 / 4 est entre  0 et 100 y et x valent 0



#include <stdio.h>

int main ()
{
	int x;
    int y;
    

    x=42; // x vaut 42 ; y ce n est pas déterminé
    y=314; // x vaut 42 , y vaut 314
    
    scanf( "%d %d", &x, &y );
    

    printf("x = %d \n  y = %d \n", x, y);

    if ( x%2 != 0 ) // si au contraire du reste de la / euclidienne est = à 0 donc impair
    {  
        y--;// y--; est  le raccourci de y=y-1
    }
    //code ici
    if  ( y < 400 )
    {
        x = 50;
    }

    if  ( x - y + 5 / 4 >= 0 &&  x - y + 5 / 4 <= 100 )
    {   
       y == 0;
       x == 0;
    }
	printf("x = %d \n y = %d \n", x, y);
}

/*void main(void)
{
	//declaration de la variable
	int nombre_test;
	int nombre_deux;

	/*
		initialization de la variable
	*/ /*
	nombre_test = 1;
	nombre_deux = 4;
	
	if(nombre_test == 1)
	{
		printf("oui");
	}
	else
	{
		printf("non");
	}
	
}
*/ 
