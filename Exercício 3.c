//Exercício 3

#include <stdio.h>

int main() {
    int senha = 0;
    int senhaoficial = 1234;
 
 printf( "Olá seja bem vindo ao nosso site.\n" );
 printf( "Digite a senha cadastrada: " );
 
 scanf( "%d", &senha );
 
 if (senha == senhaoficial){
     printf("Acesso Permitido \n");
 } else{
     printf("Acesso Negado \n");
 }
    return 0;
}