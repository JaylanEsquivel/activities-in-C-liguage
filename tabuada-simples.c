#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
   /* 
   * Situação problematizadora
    *  Uma empresa necessita de um programa que simule uma calculadora para poder ajudar o setor financeiro a realizar as operações
    *  triviais(soma, subtração, multiplicação e divisão).
    *
    *  É importante que a calculadora calcule e exiba o resultado de todas as quatro operações com os seus respectivos valores.
   */

    setlocale(LC_ALL, "Portuguese");
    /* minhas variaveis */
    int valor1, valor2, resultado;

    printf("Tabuada de cálculos trivias\n\n");

    printf("Primeiro valor: ");
    scanf("%d", &valor1);
    printf("Segundo valor: ");
    scanf("%d", &valor2);

    printf("O resultado da soma de %i + %i = %i \n", valor1, valor2, valor1 + valor2);
    printf("O resultado da subitração de %i - %i = %i \n", valor1, valor2, valor1 - valor2);
    printf("O resultado da multiplicação de %i * %i = %i \n", valor1, valor2, valor1 * valor2);
    printf("O resultado da Divisão de %i / %i = %i \n", valor1, valor2, valor1 / valor2);

    return 0;
}
