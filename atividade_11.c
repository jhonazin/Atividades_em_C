#include <stdio.h>
void estoque();
int main(){
    estoque();
    return 0;
}
void estoque(){
    int cod,quant,quantm,quantmx;
    char des[10];
    printf("Informe o codigo do produto: ");
    scanf("%d", &cod);
    printf("descricao do produto: ");
    scanf("%s", des);
    printf("Informe a quantidade do produto: ");
    scanf("%d", &quant);
    printf("informe a quantidade minima: ");
    scanf("%d", &quantm);
    printf("informe a quantidade maxima: ");
    scanf("%d", &quantmx);
    if (quant <= quantm) {
    printf("estoque ta fudido");
    }
    else{ 
    printf("codigo: %d,\n", cod,quant);
    if (quant != quantm){
        printf("A quantidade é diferente da quantidade minima.\n");
    }
    }
}


