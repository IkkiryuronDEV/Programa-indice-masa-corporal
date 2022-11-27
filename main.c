#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;
    float altura;
    float resultado;
    printf("Ingrese su peso y su altura.\n");
    scanf("%f", &peso);
    scanf("%f",&altura);
    printf("Ahora diremos cual es tu indice de masa corporal:\n");
    altura=pow(altura,2);
    resultado=peso/altura;
    printf("%f",resultado);
    return 0;
}
