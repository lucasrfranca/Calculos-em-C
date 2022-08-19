#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa que leia quatro números reais, calcule e mostre a soma e a 
média desses números.
*/

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, soma, media;
	
	printf ("Digite o primeiro número: ");
	scanf ("%f", &n1);
	
	printf ("Digite o segundo número: ");
	scanf ("%f", &n2);
	
	printf ("Digite o terceiro número: ");
	scanf ("%f", &n2);
	
	printf ("Digite o quarto número: ");
	scanf ("%f", &n4);
	
	soma = n1+n2+n3+n4;
	media = (n1+n2+n3+n4)/4;
	
	printf ("A soma dos quatro números = %.2f\n", soma);
	printf ("A média dos quatro números = %.2f", media);
	
}