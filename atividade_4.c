#include <stdio.h>
void parimpar();
int main (){
    parimpar();
    return 0;
}
void parimpar(){
    int numero;
    printf("Escreva um numero: ");
    scanf("%d", &numero);
    numero = numero %2;
    if (numero == 0)
    printf("par");
    else 
    printf("impar");
}

