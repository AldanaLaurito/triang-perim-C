#include<stdio.h>
#include<stdlib.h>

int perimetro(int Lado1, int Lado2, int Lado3)
{
	int perimetro;
	
	printf("Ingrese primer lado: ");
	scanf("%d", &Lado1);
	
	printf("Ingrese segundo lado: ");
	scanf("%d", &Lado2);
	
	printf("Ingrese tercer lado: ");
	scanf("%d", &Lado3);
	
	perimetro=Lado1+Lado2+Lado3;
	
	return perimetro;
}

int main()
{
	int Lado1=0,Lado2=0,Lado3=0,resultado=0;
	
	resultado=perimetro(Lado1,Lado2,Lado3);
	
	printf("El perimetro es:%d", resultado);
	printf("\n");
	
	return 0;
}
