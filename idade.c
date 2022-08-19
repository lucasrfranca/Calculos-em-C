#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba o ano de nascimento de uma pessoa e o ano 
atual, calcule e mostre: a idade dessa pessoa e quantos anos ela terá em 2050
*/

main() {
	
	int ano_nascimento, ano_atual, idade, idade_2050;
	
	printf ("Digite o seu ano de nascimento: ");
	scanf ("%d", &ano_nascimento);
	
	printf ("Digite o ano atual: ");
	scanf ("%d", &ano_atual);
	
	idade = ano_atual-ano_nascimento;
	idade_2050 = (2050-ano_atual)+idade;

	
	printf ("A sua idade = %d\n", idade);
	printf ("A sua idade em 2050 = %d", idade_2050);
	
}