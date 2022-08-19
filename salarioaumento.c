#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que receba o salário de um funcionário, calcule e mostre o 
novo salário, sabendo que este sofreu um aumento de 25%.
*/

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario, porc, novo_salario;
	
	printf ("Digite seu salário: ");
	scanf ("%f", &salario);
	
	porc = salario*0.25;
	novo_salario = salario + porc;
	
	printf ("O novo salário com aumento = %.2f", novo_salario);
		
}