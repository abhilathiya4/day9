#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("enter value of A:  ");
	scanf("%i",&a);	
	
	printf("enter value of B:  ");
	scanf("%i",&b);	
	
	printf("enter value of C:  ");
	scanf("%i",&c);	
	
	
	if(a<b){
		
		if(a<c){
			
			printf("A is Min");
			
		}
		else{
			printf("C is Min");
			
		}
	}
	else{
		
		if(b<c){
			printf("B is Min");
			
		}
		else{
			 printf("C is Min");			
			
		}
		
	}
}
