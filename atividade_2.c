#include <stdio.h>
void diasdasemana();
int main (){
    diasdasemana();
    return 0; 
}
void diasdasemana(){
    int dia;
    printf("Qual o dia da semana\n");
    printf("domingo-1\n");
    printf("segunda-2\n");
    printf("terca-3\n");
    printf("quarta-4\n");
    printf("quinta-5\n");
    printf("sexta-6\n");
    printf("sabado-7\n");
    scanf("%d", &dia);
     
     if (dia == 1 || dia == 7){
            printf("dia nao util"); 
        }
        else if(dia > 1 && dia < 7){
            printf("dia util"); 
        }
        else{
        printf("Voce digitou um numero invalido, reininie o programa!");
        }
}
