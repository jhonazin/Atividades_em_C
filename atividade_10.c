#include <stdio.h>
void modelo();
int main() {
    modelo();
    return 0;
}
void modelo() {
    int idade;
    float altura;
    char nome[100];
    printf("Informe seu nome: ");
    scanf("%s", nome);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    if ((idade >=15 && idade <=17 && altura >=1.70 && altura <= 1.80)) {
    printf("aprovada");
    }
    else 
    printf("reprovada");
}




