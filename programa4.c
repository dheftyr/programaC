#include <stdio.h>

int main(){
	
	float valor, taxa, resultado, total;
	
	printf("Insira o valor do deposito:\n");
	scanf("%f", &valor);
	system("cls");
	printf("Insira o valor da taxa:\n");
	scanf("%f", &taxa);
	system("cls");
	
	resultado = valor * (taxa/100);
	
	total = valor + resultado;
	
	printf("Seu deposito:%.2f \nValor do rendimento:%.2f \nGanho Total:%.2f", valor, resultado, total);
	
	
	
	return 0;
}
