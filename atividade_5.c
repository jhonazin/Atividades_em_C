#include <stdio.h>
void ano();
int main (){
    ano();
    return 0;
}
void ano(){
    int ano;
    printf("Informe o ano: ");
    scanf("%d", &ano);
    if ( ( (ano % 4 == 0) && (ano % 100 != 0) ) || (ano % 400 == 0) )
    printf("ano e bi");
    else
    printf("nao e");
}