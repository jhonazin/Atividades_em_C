#include <stdio.h>
void calc();
int main(){
    calc();
    return 0;
}
void calc(){
    float altura, resultado;
    char sexo;
    printf("Digite seu sexo [F] ou [M]: ");
    scanf("%c", &sexo);
    printf("Digite sua altura:");
    scanf("%f", &altura);
    if(sexo == 'M'){
    resultado = 72.7 * altura - 58;
    printf("o calculo e: %f\n", resultado);
    }
    else if(sexo == 'F'){
    resultado = 62.1 * altura - 44.7;
    printf("o calculo e: %f\n", resultado);
    }
    else{
    printf("faz direito krl");
    }
}