#include <stdio.h>

int main()
{
    /*
     *   Comentários em linguagem C
     *
     *
     * ------- Tipos de Variáveis--------------------------
     * + char = Ex: 'M'
     * + int = Ex: 20
     * + float = Ex: 2,76
     * + double = Ex: 2.000.00
     * + void = Aceita qualquer valor.
     * -----------------------------------------------------
     */

    printf("Hello word!\n");

    // VALOR DIVISIVEL OU NÃO ################################

    int A, B;

    printf("Insira um valor 1: ");
    scanf("%d", &A);

    printf("Insira um valor 2: ");
    scanf("%d", &B);

    float media = A / B;

    if (A % B == 0)
    {
        printf("%i é divisível por %i.", A, B);
        printf("\nResultado da divisão: %.2f\n", media);
    }
    else
    {
        printf("Negativo \n");
    }

    // VALOR DIVISIVEL OU NÃO ################################


    return 0;
}
