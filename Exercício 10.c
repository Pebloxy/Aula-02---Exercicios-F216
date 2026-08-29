//Exercício 10

#include <stdio.h>

int main() {
    int num1 = 0; 
 
 printf( "Entre com um inteiro e eu lhe direi\n" );
 printf( "se ele está dentro do intervalo de 10 e 20: " );
 
 scanf( "%d", &num1 );

 if (num1 >= 10 && num1 <= 20){
     printf("Valor aceito \n");
 } else{
     printf("Valor inválido \n");
 }

 return 0;
}
