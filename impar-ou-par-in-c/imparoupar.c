#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>

/******************* função para verificar se é par *********************/

bool epar(int valor) 
{
  bool resultado;
  resultado = valor % 2 == 0 ? true : false;

  return(resultado); //retornando o valor para main
}
/******************* função principal (main) *********************/
int main(void)
{
    /* Desenvolver um programa para que o usuário possa realizar a digitação de 
    * dois números (número inicial e número final).
    * Dentro de uma estrutura de repetição será preciso verificar se o número que 
    * está sendo alimentado é um número par ou ímpar. A checagem do número deverá 
    * ser feita em uma função a ser criada. A função é quem deverá verificar a 
    * informação recebida e retornar o status se é par ou ímpar. Dentro da estrutura 
    * de repetição será preciso exibir uma mensagem com o valor do número e mais uma 
    * frase dizendo se ele é par ou ímpar. Após o término da estrutura de repetição
    *  será preciso informar a quantidade total de números pares encontrados.
    *  */
       setlocale(LC_ALL, "Portuguese");


   int initial_value, final_value, par;
   

   printf("Informe o valor inicial da repetição: \n");
   scanf("%d", &initial_value);

   printf("Agora informe o valor final da repetição: \n");
   scanf("%d", &final_value);

   if(initial_value <= final_value){

        for (int i = initial_value; i <= final_value; i++)
        {
            int result;
            if(epar(i)){
                result = 1;
                par++;
            }else{
                result = 0;
            }

            printf("O valor: %d é %s\n", i, result ? "PAR" : "IMPAR");
        }

        printf("Números de valores pares: %d\n", par);
        
   }else{
        printf("Você informou um valor inicial maior que um valor final!");
   }


   

    return 0;
}
