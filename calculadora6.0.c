#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int num1, num2, soma, subtracao, multi, div, pot, rad;

	printf("Ola! Seja muito bem vindo a Calculadora 6.0! Autor: Nicolas Schonhorst Mallmann. Matricula 202212627. Curso: Ciencia de Dados. Universidade La Salle                    Insira, por gentileza, dois numeros inteiros para realizar os calculos:");
	
	           
	scanf("%i%i",&num1, &num2);

	
	soma = num1 + num2;
	subtracao = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;
	pot = pow (num1, num2);
	rad = sqrt (num1+num2);
	printf("A soma: %i\n", soma );
	printf("A subtracao resulta em: %i\n", subtracao );
	printf("O produto resulta em: %i\n", multi );
    printf("A divisao resulta em: %i\n", div );
    printf("Essa potencia resulta em: %i \n", pot );
    printf("A raiz quadrada da soma desses dois numeros equivale a: %i \n", rad);
    
    printf("Esse codigo foi criado por Nicolas, com base nas seguintes referencias : http://excript.com/linguagem-c/calculadora-c.html, https://www.youtube.com/watch?v=I5xGmWqsjXI, https://www.cprogressivo.net/2013/02/Como-criar-uma-calculadora-em-linguagem-C.html, e tambem o eBook da Unidade 2. Muito obrigado! ");
    
    return 0;
}
