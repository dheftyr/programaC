#include <stdio.h>


int main(){
	
	float base1, base2, altura, area;
	
	printf("Digite a base 1:\n");
	scanf("%f", &base1);
	system("cls");
	printf("Digite a base 2:\n");
	scanf("%f", &base2);
	system("cls");
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	system("cls");
	
	area = ((base1 + base2) * altura) /2;
	
	printf("A area do trapezio:%.2f", area);
	
	return 0;
}
