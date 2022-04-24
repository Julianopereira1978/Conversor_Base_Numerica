 /* Descrição: Calculadora de conversão de bases numéricas desenvolvida em C, elaborada para executar conversões de Decimal para Hexadecimal e de Hexadecimal para Decimal. */

 // Linhas 5, 6 e 7: Inclusão das Bibliotecas que serão necessárias a correta execução do projeto. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 // Declarada principal função do programa (main).
int main(int argc, char *argv[]) 
{
 // Selecionado idioma português para que a visualização do programa em execução apresente ao usuário a correta acentuação gráfica.

    setlocale(LC_ALL, "Portuguese"); 

 // Declaradas variáveis opção e valor do tipo inteiro.

    int opcao;
    int valor;

 // Apresentado o menu do conversor.

    printf("===========================================\n");
    printf("=      Conversor de Bases Numéricas       =\n");
    printf("=      1:  Decimal para Hexadecimal       =\n");
    printf("=      2:  Hexadecimal para Decimal       =\n");
    printf("===========================================\n");

 // Programa solicita ao usuário o tipo de conversão a ser realizada.

    printf("\n\n Escolha a opção de Conversão: ");

 // Programa 
    scanf("%d", &opcao);
    getchar();

    if(opcao == 1)
    {
        printf("\nInforme o valor em Decimal: ");
        scanf("%d", &valor);
        getchar();
        printf("%d em hexadecimal é: %x\n", valor, valor);
    }
    else if(opcao == 2)
    {
        printf("\nInforme o valor em Hexadecimal: ");
        scanf("%x", &valor);
        getchar();
        printf("%x em Decimal é: %d\n", valor, valor);
    }

    else printf("\n Opção Inválida, o Programa Será Encerrado. \n");

    system("PAUSE");
    return 0;
}
