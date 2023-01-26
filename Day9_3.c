#include<stdio.h>

main(){
	
	int a,b,c,d,e;
	
	printf("enter value of A:  ");
	scanf("%i",&a);	
	
	printf("enter value of B:  ");
	scanf("%i",&b);	
	
	printf("enter value of C:  ");
	scanf("%i",&c);	
	 
	printf("enter value of D:  ");
	scanf("%i",&d);	
	
	printf("enter value of E:  ");
	scanf("%i",&e);	
	
	if(a<b){
		
		if(a<c){
			
			if(a<d){
				
				if(a<e){
					
					printf("A is Min");
				}				
				else{
					 printf("E is Min");
					
				}
			}
			else{
				if(d<e){
					
					printf("D is Min");
				
				}
				else{
					printf("E is Min");
					
				}
				
			}
		
			
		}
		else{
			if(c<d){
				
				if(d<e){
					printf("E is Min");
					
				}
				else{
					printf("D is Min");
					
				}
			}
			else{
				if(c<e){
					printf("C is Min");
					
				}
				else{
					printf("E is Min");
					
				}
				
				
				
			}
		
			
		}
	}
	else{
		
		if(b<c){
			
			if(b<d){
				
				if(b<e){
					
					printf("B is Min");
					
				}
				else{
					printf("E is Min");
					
				}
			   
				
				
			}
			else{
				if(d<e){
					printf("D is Min");
					
					
				}
				else{
					printf("E is Min");
					
				}
				
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("C is Min");
					
				}
				else{
					printf("E is Min");
					
				}
				
			}
			else{
				if(d<e){
					printf("D is Min");
				}
				else{
					printf("E is Min");
				}
				
				
			}
			
			
		}
	
		
	}
}
		
		
	
