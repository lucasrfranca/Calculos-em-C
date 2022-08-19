#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que receba o salário de um funcionário e o percentual de 
aumento, calcule e mostre o valor do aumento e o novo salário
*/

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario_base, porc, valor_aumento, novo_salario;
	
	printf ("Digite seu salário: ");
	scanf ("%f", &salario_base);
	
	printf ("Digite o percentual de aumento: ");
	scanf ("%f", &porc);
	
	valor_aumento = (salario_base*porc)/100;
	novo_salario = salario_base+valor_aumento;
	
	printf ("O valor do aumento = %.2f\n", valor_aumento);
	printf ("O salário com aumento = %.2f", novo_salario);
	
}