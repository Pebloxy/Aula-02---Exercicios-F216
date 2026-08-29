//Exercício 8

#include <stdio.h>

int main() {
    int num1 = 0; 
 
 printf( "Entre com sua nota e eu lhe direi\n" );
 printf( "se você foi aprovado ou não: \n" );
 
 scanf( "%d", &num1 );
 
 if (num1 > 100){
    printf("Digíte uma nota válida \n");
 } else if (num1 < 0){
     printf("Digíte uma nota válida \n");
 } else if (num1 < 60){
     printf("Reprovado \n");
 } else{
     printf("Aprovado \n");
 }
    return 0;
}