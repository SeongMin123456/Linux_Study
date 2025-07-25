#include<stdio.h>

int main(void)
{
	int age;
	scanf("%d",&age);
	if(age >= 18){
		printf("adult");
	}
	else if(age >= 13){
		printf("youth");
	}
	else{
		printf("cildren");
	}
}

		
