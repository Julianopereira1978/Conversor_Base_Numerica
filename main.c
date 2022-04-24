 /* Descri��o: Calculadora de convers�o de bases num�ricas desenvolvida em C, elaborada para executar convers�es de Decimal para Hexadecimal e de Hexadecimal para Decimal. */

 // Linhas 5, 6 e 7: Inclus�o das Bibliotecas que ser�o necess�rias a correta execu��o do projeto. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 // Declarada principal fun��o do programa (main).
int main(int argc, char *argv[]) 
{
 // Selecionado idioma portugu�s para que a visualiza��o do programa em execu��o apresente ao usu�rio a correta acentua��o gr�fica.

    setlocale(LC_ALL, "Portuguese"); 

 // Declaradas vari�veis op��o e valor do tipo inteiro.

    int opcao;
    int valor;

 // Apresentado o menu do conversor.

    printf("===========================================\n");
    printf("=      Conversor de Bases Num�ricas       =\n");
    printf("=      1:  Decimal para Hexadecimal       =\n");
    printf("=      2:  Hexadecimal para Decimal       =\n");
    printf("===========================================\n");

 // Programa solicita ao usu�rio o tipo de convers�o a ser realizada.

    printf("\n\n Escolha a op��o de Convers�o: ");

 // Programa 
    scanf("%d", &opcao);
    getchar();

    if(opcao == 1)
    {
        printf("\nInforme o valor em Decimal: ");
        scanf("%d", &valor);
        getchar();
        printf("%d em hexadecimal �: %x\n", valor, valor);
    }
    else if(opcao == 2)
    {
        printf("\nInforme o valor em Hexadecimal: ");
        scanf("%x", &valor);
        getchar();
        printf("%x em Decimal �: %d\n", valor, valor);
    }

    else printf("\n Op��o Inv�lida, o Programa Ser� Encerrado. \n");

    system("PAUSE");
    return 0;
}
