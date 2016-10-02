#include<stdio.h>
#include<locale.h>

int main (){
	
	
	
	
	float gas;
	int km, lit;
	
	gas=3.40;
	lit=25;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Coloque a quantidade de km. \n \n ");
		scanf("%d",&km);


		printf("\nTotal a receber é: R$ %f \n \n ", km * gas / lit );
		
		
	
			return(0);
		
					
}
