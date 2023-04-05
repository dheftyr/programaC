# include <stdio.h>

int main(){
	
	int num, suc, ant;
	
	printf("Digite um numero:\n");
	scanf("%d", &num);
	system("cls");
	
	suc = num + 1;
	ant = num - 1;
	
	printf("Foi digitado o numero:%d \nSeu sucessor:%d \nSeu antecessor:%d",num, suc, ant);
	
	return 0;
}
