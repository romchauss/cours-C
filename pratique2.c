#include <stdio.h>

int main ()
{
	char character;

    character = 'z';

    if (character >= 'a' && character <= 'z' )
    {
            printf("character = %c est un character minuscule", character);
    }
    else if (character >= 'A' && character <= 'Z' )
    {
            printf("character = %c est un character majuscule", character);
    }
    else
    {
        printf("character = %c est pas une lettre", character);
    }
    

 
	//printf("c = %c est un character minuscule", c);

    //printf("c = %c est un character majuscule", c);

    //printf("c = %c est pas une lettre", c);


}
/*
	//declaration de la variable
	int nombre_test;
	int nombre_deux;
*/
	/*
		initialization de la variable
	*/
/*
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