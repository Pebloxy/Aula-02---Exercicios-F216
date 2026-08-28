//Exercício 1

#include <stdio.h>

int main() {
    int num1 = 0; 
 
 printf( "Entre com um inteiro e eu lhe direi\n" );
 printf( "se é par ou ímpar: " );
 
 scanf( "%d", &num1 );
 
 if ((num1 % 2)== 1){
     printf("%d é impar\n", num1);
 } else{
     printf("%d é par\n", num1);
 }
    return 0;
}