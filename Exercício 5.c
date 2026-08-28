//Exercício 5

#include <stdio.h>

int main() {
    float num1 = 0; 
    float num2 = 0;
    float result = 0;
 
 printf( "Entre com dois inteiros e eu lhe direi\n" );
 printf( "a divisão: " );
 
 scanf( "%f%f", &num1, &num2 );
 
 if (num2 == 0){
     printf("Erro: Não é possível dividir por zero!");
 } else {
     result = (num1 / num2);
    printf("O resultado é %f\n", result);
 }
    return 0;
}