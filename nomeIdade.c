#include <stdio.h>

int main(){
    char nome [50]; //array de caracteres para armazenar nome
    int idade;      // variável para idade

    //entradas:
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Olá %s, você tem %d anos!\n", nome,idade);

    return 0;
}