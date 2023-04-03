#include <stdio.h>

int main(){
	
	int i;
	
	for(i = 1; i <= 10; i++){
		
		printf("Repeticao:%d\n",i);
		
		if(i == 5){
			int j;
				
				for(j= 5; j >= 1; j--){
					printf("Retrocedendo:%d\n",j);
				}
			
		}
	}
	
	printf("\n\n");
	
	int h =1;
	
		while(h <= 10){
			
			printf("Repeticao:%d\n",h);
			h++;
			
			if(h == 6){
				int g = 5;
				
				while(g >= 1){
					
					printf("Retrocedendo:%d\n",g);
					g--;
				}
			}
			
		}
	
	return 0;
}
