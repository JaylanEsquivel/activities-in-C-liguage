#include <stdio.h>

int main(void)
{
    /* Desenvolver um programa que leia uma matriz de 3 x 3 elementos 
    *  usando um comando for, multiplique cada elemento por cinco
    *  e imprima o resultado.
    *  */

   int row, col, mat[3][3];

   for (row = 0; row <= 3; row++)
   {
        for (col = 0; col <= 3; col++)
        {
            printf("Informe o valor da linha %d e coluna %d: \n", row, col);
            scanf("%d", &mat[row][col]);
        }
   }

   printf("Imprimindo Valor da matriz mutiplicado por 5: \n\n");

   for (row = 0; row <= 3; row++)
   {
        for (col = 0; col <= 3; col++)
        {
            printf("Valor %d * 5 = %d \n", mat[row][col], mat[row][col]*5);
        }
   }
   

    return 0;
}
