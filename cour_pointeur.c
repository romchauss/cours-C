#include <stdio.h>

int main(void)
{
    int age;
    age = 10;

    int *pointeurSurAge;
    pointeurSurAge = &age;

    printf("%p\n", pointeurSurAge);
    printf("L'adresse de la variable age est : %p \n", &age);
    printf("L'adresse de la variable age est : %d", age);
    
}