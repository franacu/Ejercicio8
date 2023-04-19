#include <stdio.h>
int valor(int *x)
{
    int c;
    c=(*x)*(*x)*(*x);
    printf("El cubo del numero %d es %d",*x,c);
}

int main()
{
    int a,b;
    printf("Ingresar valor:\n");
    scanf("%d",&a);
    valor(&a);
    return 0;
}