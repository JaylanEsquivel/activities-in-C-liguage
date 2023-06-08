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
    /* code */
    int menu = 0;
    float valor1, valor2, resultado;

    do
    {
        int pres = 0;
        system("clear");
        printf("---- MENU DO SISTEMA DE TABUADA ----\n");
        printf("1: Adição\n");
        printf("2: Subtração\n");
        printf("3: Multiplicação\n");
        printf("4: Divisão\n");
        printf("5: Sair\n");
        printf("-------------------------\n");
        printf("Selecione a opção desejada: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("1: Adição\n\n");

            printf("Primeiro valor: ");
            scanf("%f", &valor1);

            printf("Segundo valor: ");
            scanf("%f", &valor2);

            resultado = valor1 + valor2;
            printf("O resultado da soma de %.2f + %.2f = %.2f \n\n", valor1, valor2, resultado);

            break;
        case 2:
            printf("2: Subtração\n\n");

            printf("Primeiro valor: ");
            scanf("%f", &valor1);

            printf("Segundo valor: ");
            scanf("%f", &valor2);

            resultado = valor1 - valor2;
            printf("O resultado da subitração de %.2f - %.2f = %.2f \n\n", valor1, valor2, resultado);

            break;
        case 3:
            printf("3: Multiplicação\n\n");

            printf("Primeiro valor: ");
            scanf("%f", &valor1);

            printf("Segundo valor: ");
            scanf("%f", &valor2);

            resultado = valor1 * valor2;
            printf("O resultado da multiplicação de %.2f * %.2f = %.2f \n\n", valor1, valor2, resultado);

            break;
        case 4:
            printf("4: Divisão\n\n");

            printf("Primeiro valor: ");
            scanf("%f", &valor1);

            printf("Segundo valor: ");
            scanf("%f", &valor2);

            resultado = valor1 / valor2;
            printf("O resultado da Divisão de %.2f / %.2f = %.2f \n\n", valor1, valor2, resultado);

            break;
        case 5:
            printf("Obrigado volte sempre!\n\n");
            break;
        default:
            printf("Valor inválido!\n\n");
            break;
        }

        while (menu != 5 && pres != 1)
        {
            printf("Aperte a tecla `1´ para continuar...");
            scanf("%d", &pres);
            printf("\n Valor: %d \n", pres);
        }
    } while (menu != 5);

    return 0;
}
