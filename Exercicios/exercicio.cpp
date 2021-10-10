#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int var,var4,var3,opcao= 0;
float var2, resultado=0;
char nome[50];
const float pi=3.14;
	do{
	printf("Escolha case ai doido\n1-explica variavel\n2-dois variaveis\n3-Vetor nome\n4-Constante PI.\n5-Distancia entre dois pontos\n0-Sair\n");
	scanf("%d",&opcao);
	system("pause");
	system("cls");
	switch(opcao){
									case 1:
									//explicando uma variavel
									printf("Uma variavel e um lugar na memoria alocado para guardar um dado temporario\n");
									printf("Voce pode colocar ela como valores inteiros, strings, floats etc.\n");
									printf("-----------------\n");
									system("pause");
									system("cls");
									
									
									
									
									//=---------=
									
									printf("Agora insira um valor a variavel 'var', na qual e um valor I N T E I R O.\n");
									scanf("%d",&var);//escaneia a variavel
									printf("Voce escreveu %d\n",var);//printa a variavel dizendo qual o valor é
									system("pause");
									system("cls");
									var = 0;
									break;
					
								case 2:
								//-----------------------------------------------------
								//duas variaveis agora
								printf("Isso foi uma variavel, agora tentaremos duas e elas ficaram A - B! Okay?\n");
								printf("Insira a variavel n1 (Inteira):\n");
								scanf("%d",&var);//entrada inteira
								printf("O valor foi de %d\n",var);
								printf("Insira segunda variavel\n");
								scanf("%f",&var2);//entrada float
								printf("As variaveis ficaram A= %d | B= %.2f\n",var,var2);//apresentação das duas vars int e float.
								printf("Agora o resultado da subração foi igual a:\n");
								resultado=var-var2;
								printf("Subtracao ficou igual a %.2f\n",resultado);//resultado da inteira - float
								system("pause");
								system("cls");
								break;
					
							case 3:
							//-----------------------------------
							//vetor string doido oOOOOOOOOOOOO
							printf("Digite o seu nome (limite 50 chars):\n");
							gets(nome);
							printf("Seu nome e:\n");
							printf("%s",nome);
							system("pause");
							system("cls");
							break;
					
						case 4:
						//constante PI
						printf("Vamos calcular uma circunferencia.\n");
						printf("Insira o valor do raio!:\n");
						scanf("%f",&var2);
						resultado = 2*pi*var2;
						printf("%.2f\n",resultado);
						system("pause");
						system("cls");
						break;
			case 5:
			printf("Distancia entre dois pontos\n");
			printf("Insira os valores em ordem correta 1x 2x 1y 2y INTEIROS\n");
			scanf("%d %f %d %d",&var,&var2,&var3,&var4);
			resultado=sqrt(pow(var2-var,2)+pow(var4-var3,2));
			printf("%.2f\n",resultado);
			system("pause");
			system("cls");
			break;
}
}while(opcao!=0);
return(0);
}
