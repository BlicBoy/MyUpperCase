#include <stdio.h>
#include <stdlib.h>


/*

Autor: Gonçalo Oliveira
Data: 02/12/2021

*/


//inicializar
void MyUpperCase (char frase[30]);


int main()
{
    //variaveis
    char palavra[30];

    //pedir palavra
    printf("Palavra: ");
    fgets(palavra, 32, stdin);

    //chamar a fução
    MyUpperCase(palavra);

    getchar();
}

void MyUpperCase(char frase[30])
{
    //variaveis
    int i;

    //percorrer a palavra
    for (i = 0; frase[i] != '\0'; i++)
    {
       frase[i] = frase[i] ^ 32; //Expressão converter de maiscula para miniscula e vice versa
       
    }

    printf("Palavra em Maiusculas: %s", frase);
    
}

/*

Na tabela ASCII, as letras maisculas e minusculas estão distantes 32 posições. Então, para converter um caracterer de maisculo para minusculo e vice & versa, baster fazer um XOR com 32.

*/