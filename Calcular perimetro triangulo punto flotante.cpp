#include<stdio.h>
#include<stdlib.h>

float perimetro(float Lado1, float Lado2, float Lado3)
{
	float perimetro;
	
	printf("Ingrese primer lado: ");
	scanf("%f", &Lado1);
	
	printf("Ingrese segundo lado: ");
	scanf("%f", &Lado2);
	
	printf("Ingrese tercer lado: ");
	scanf("%f", &Lado3);
	
	perimetro=Lado1+Lado2+Lado3;
	
	return perimetro;
}

int main()
{
	float Lado1=0,Lado2=0,Lado3=0,resultado=0;
	
	resultado=perimetro(Lado1,Lado2,Lado3);
	
	printf("El perimetro es: %.2f", resultado);
	printf("\n");
	
	return 0;
}
