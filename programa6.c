#include <stdio.h>
#include <math.h>


int main(){
	
	float num1, num2, total;
	
	printf("Digite um numero:\n");
	scanf("%f", &num1);
	system("cls");
	printf("Digite um numero que ira ser elevado:\n");
	scanf("%f", &num2);
	system("cls");
	
	total = pow (num1, num2);
	
	
	printf("%.2f sera elevado por %.2f \nTotal:%.2f", num1, num2, total);	
	
	return 0;
}
