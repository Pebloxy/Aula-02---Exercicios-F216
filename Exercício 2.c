//Exercício 2

#include <stdio.h>

int main() {
    int num1 = 0; 
 
 printf( "Entre com sua idade e eu lhe direi\n" );
 printf( "se você possue a maioridade ou não: " );
 
 scanf( "%d", &num1 );
 
 if (num1 >= 18){
     printf("Você é maior de idade \n", num1);
 } else{
     printf("Você é menor de idade", num1);
 }
    return 0;
}
