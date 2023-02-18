#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    int decisao = 0;
    float resultado, numero1, numero2, resultadoAuxiliar;
    char *operador;
    printf("Seja bem vindo a calculadora!\n\n");
    do
    {
        if (decisao == 0)
        {
            printf("Digite um numero: ");
            scanf("%f", &numero1);

            printf("\nDigite o operador\n");
            printf("'+' : soma\n");
            printf("'-' : subtracao\n");
            printf("'*' : multiplicao\n");
            printf("'/' : divisao\n");
            printf("Operador: ");
            scanf("%s", &operador);

            printf("\nDigite o segundo numero: ");
            scanf("%f", &numero2);
            if (operador == '+')
            {
                resultado = numero1 + numero2;
                printf("%.2f %c %.2f = %.2f \n\n", numero1, operador, numero2, resultado);
            }

            if (operador == '-')
            {
                resultado = numero1 - numero2;
                printf("%.2f %c %.2f = %.2f \n\n", numero1, operador, numero2, resultado);
            }

            if (operador == '*')
            {
                resultado = numero1 * numero2;
                printf("%.2f %c %.2f = %.2f \n\n", numero1, operador, numero2, resultado);
            }

            if (operador == '/')
            {
                resultado = numero1 / numero2;
                printf("%.2f %c %.2f = %.2f \n\n", numero1, operador, numero2, resultado);
            }
            printf("Digite 0 para sair ou 1 para continuar: ");
            scanf("%i", &decisao);
        }
        else
        {
            printf("\nResultado final = %.2f\n", resultado);
            printf("\nO que deseja fazer?\n");
            printf("'+' : soma\n");
            printf("'-' : subtracao\n");
            printf("'*' : multiplicao\n");
            printf("'/' : divisao\n");
            printf("Operador: ");
            scanf("%s", &operador);
            numero2 = 0;
            printf("\nDigite um numero: ");
            scanf("%f", &numero2);
            if (operador == '+')
            {
                resultadoAuxiliar = resultado;
                resultado = resultado + numero2;
                printf("%.2f %c %.2f = %.2f \n\n", resultadoAuxiliar, operador, numero2, resultado);
            }

            if (operador == '-')
            {
                resultadoAuxiliar = resultado;
                resultado = resultado - numero2;
                printf("%.2f %c %.2f = %.2f \n\n", resultadoAuxiliar, operador, numero2, resultado);
            }

            if (operador == '*')
            {
                resultadoAuxiliar = resultado;
                resultado = resultado * numero2;
                printf("%.2f %c %.2f = %.2f \n\n", resultadoAuxiliar, operador, numero2, resultado);
            }

            if (operador == '/')
            {
                resultadoAuxiliar = resultado;
                resultado = resultado / numero2;
                printf("%.2f %c %.2f = %.2f \n\n", resultadoAuxiliar, operador, numero2, resultado);
            }
            printf("Digite 0 para sair ou 1 para continuar: ");
            scanf("%i", &decisao);
        }
    } while (decisao == 1);
    return 0;
}

//Fim
