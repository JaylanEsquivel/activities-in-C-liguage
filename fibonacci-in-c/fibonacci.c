#include <stdio.h>

int main()
{

    /*
    * Considere que você esteja participando de um processo seletivo e uma das questões seja:
    * Com base nos termos 34 e 55 da sequência de Fibonacci, será preciso dar sequência ao andamento dos novos números até que o valor dos próximos mil termos sejam exibidos.
    *
    * Para atender à demanda, faça o pseudocódigo da sequência de Fibonacci para obter os mil termos a partir do 34 e do 55 de acordo com a situação problematizadora.
    */

   long double initial = 34;
   long double sequential = 55;
   long double assistant;

   printf("%.0Lf ", initial);
   printf(",%.0Lf ", sequential);

   for(int i = 0; i < 1000 ; i++){

        assistant = initial + sequential;
        initial = sequential;
        sequential = assistant;

        printf(",%.0Lf ", assistant);
   }

   return 0;
}
