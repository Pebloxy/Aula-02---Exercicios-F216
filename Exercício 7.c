//Exercício 7

#include <stdio.h>

int main() {
    int num1 = 0; 
    int num2 = 0;
    int num3 = 0;
 
 printf( "Entre com três inteiros e eu lhe direi\n" );
 printf( "qual o maior: " );
 
 scanf( "%d%d%d", &num1, &num2, &num3);
 
 if (num1 > num2){
     if (num1 > num3){
     printf("O maior numero é o %d\n", num1);
     } else {
     printf("O maior numero é o %d\n", num3);
     }
 } else {
    if (num2 > num3){
     printf("O maior numero é o %d\n", num2);
     } else {
     printf("O maior numero é o %d\n", num3);
     }
 }
    return 0;
}