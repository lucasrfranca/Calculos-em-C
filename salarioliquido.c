#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa que receba o salário-base de um funcionário, calcule e 
mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 10% 
sobre o salário-base e paga imposto de 5% sobre o salário-base.
*/

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario_base, aumento, imposto, reajuste, salario_novo;
	
	printf ("Digite seu salário: ");
	scanf ("%f", &salario_base);
	
	aumento = salario_base*0.10;
	imposto = salario_base*0.05;
	reajuste = aumento-imposto;
	salario_novo = salario_base+reajuste;
	
	printf ("Seu salário após reajuste = %.2f", salario_novo);
	
}