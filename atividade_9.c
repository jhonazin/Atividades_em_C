#include <stdio.h>
void volei();
int main(){
    volei();
    return 0;
}
void volei(){
    int idade;
    char genero;
    printf("Infome seu sexo [M] ou [F] ");
    scanf("%c", &genero);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    if
    (genero == 'F' && idade >= 7 &&  idade <= 10){
    printf("time feminino!\n");
    }
    else if
    (genero == 'M' && idade >= 8 && idade <= 12){
    printf("time masculino!\n");
    }
    else 
    printf("nao se encaixa no time\n");
    
}

