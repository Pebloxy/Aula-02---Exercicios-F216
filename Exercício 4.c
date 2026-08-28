//Exercício 4

#include <stdio.h>

int main() {
    int num1 = 0; 
 
 printf( "Entre com um inteiro e eu lhe direi\n" );
 printf( "se é Positivo, Negativo ou Zero: " );
 
 scanf( "%d", &num1 );
 
 if (num1 > 0){
     printf("%d é Positivo\n", num1);
 } else if (num1 == 0){
     printf("%d é Zero\n", num1);
 } else{
     printf("%d é Negativo\n", num1);
 }
    return 0;
}