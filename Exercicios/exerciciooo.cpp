#include <stdio.h>
#include <stdlib.h>
int var;
float var2, resultado;

int main(){
	//explicando uma variavel
	printf("Uma variavel e um lugar na memoria alocado para guardar um dado temporario\n");
	printf("Voce pode colocar ela como valores inteiros, strings, floats etc.\n");
	printf("-----------------\n");
	system("pause");
	system("cls");
	
	
	
	
	//=---------=
	
	printf("Agora insira um valor a variavel 'var', na qual e um valor I N T E I R O.\n");
	scanf("%d",&var);//escaneia a variavel
	printf("Voce escreveu %d",var);//printa a variavel dizendo qual o valor é
	system("pause");
	system("cls");
	var = 0;
	
	
	
	//-----------------------------------------------------
	//duas variaveis agora
	printf("Isso foi uma variavel, agora tentaremos duas e elas ficaram A - B! Okay?\n");
	printf("Insira a variavel n1 (Inteira):\n");
	scanf("%d",&var);//entrada inteira
	printf("O valor foi de %d",var);
	printf("Insira segunda variavel\n");
	scanf("%f",&var2);//entrada float
	printf("As variaveis ficaram A= %d | B= %.2f\n",var,var2);//apresentação das duas vars int e float.
	printf("Agora o resultado da subração foi igual a:\n");
	resultado=var-var2;
	printf("Subtracao ficou igual a %.2f\n",resultado);//resultado da inteira - float
	
}
