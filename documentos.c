#include<stdio.h>
#include<math.h>
#define n 7
	int main(){
		float x,y,resultado,factorial;
		int i;

		i=0;
		resultado=0;
		factorial=1;
		printf("Dame valor x: \n");
		scanf("%f",&x);
		for (i=1; i<x; i++){
			factorial=x*i;
		}
		for (i=1; i<n; i++){
			double j=sqrt(x*i);
			double k=pow(x,4);
			y=(j*k)/(factorial-i);
			resultado=resultado+y;
		}
		printf("%f",resultado);
		return 0;
	}
		
