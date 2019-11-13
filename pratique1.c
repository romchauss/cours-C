#include <stdio.h>

int main ()
{
	int x;
    int y;
    

    x=42; // x vaut 42 ; y ce n est pas déterminé , t n est pas déterminé
    y=314; // x vaut 42 , y vaut 314, t n est pas determiné
    
    const int t=x ;  // x vaut 42 , y vaut 314, t vaut 42

    x=y; // x vaut 314 , y vaut 314 , t vaut 42
    y=t; // x vaut 314 , y vaut 42 , t vaut 42
	printf("x = %d \ny = %d \n", x, y);
}



/*
int main()
{
    int a, b;
    
    a = 42;
    b = 314;
                // a vaut 42 , b vaut 314
    a = a + b; // a vaut 42 + 314 donc 356 , b vaut 314
    b = a - b;// a vaut 356, b vaut a-b = 42 , b =42
    a = a - b;// a = a-b = 314 , b vaut 42
    
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}
*/
