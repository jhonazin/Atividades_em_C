#include <stdio.h>
void numeros();
int main (){
    numeros();
    return 0;
}
void numeros(){
    int n1, n2, n3;
    printf("digite um numero: ");
    scanf("%d", &n1);
    printf("digite um numero: ");
    scanf("%d", &n2);
    printf("digite um numero: ");
    scanf("%d", &n3);
    
     if (n1 >10 && n1<100 && n2 != n3 && n3> 50)
    
    printf("tudo certinho");
    
    else
    
    printf("erradinho");
    
}