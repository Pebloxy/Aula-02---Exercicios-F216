//Exercício 6

#include <stdio.h>

int main() {
    int num1 = 0; 
 
 printf( "Entre com um inteiro e eu lhe direi\n" );
 printf( "se é múltiplo de 5: " );
 
 scanf( "%d", &num1 );
 
 if ((num1 % 5)== 0){
     printf("%d é múltiplo de 5\n", num1);
 } else{
     printf("%d não é múltiplo de 5\n", num1);
 }
    return 0;
}