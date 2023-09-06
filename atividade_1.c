#include <stdio.h>
void somadosnumeros();
int main (){
somadosnumeros();
return 0;
}
void somadosnumeros(){
    int numero;
    printf("digite um numero ");
    scanf("%d", &numero);
    if(numero > 100 || numero == 50)
    printf("certo");
    else{
        numero +=1;
        printf("errado %d",numero);
    }
    

}


    

    

    
    
