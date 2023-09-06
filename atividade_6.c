#include <stdio.h>
void triangulo();
int main(){
    triangulo();
    return 0;
}
void triangulo(){
    int lado1,lado2,lado3;
    printf("calculo dos triangulos \n");
    printf("lado 1: ");
    scanf("%d", &lado1);
    printf("lado 2: ");
    scanf("%d", &lado2);
    printf("lado 3: ");
    scanf("%d", &lado3);
    if
    (lado1 == lado2 == lado3){
    printf("equilatero");}
    else if
    (lado1 != lado2 && lado2 != lado3 && lado3 != lado2){
    printf("escaleno");}
    else
    printf("isosceles");
}