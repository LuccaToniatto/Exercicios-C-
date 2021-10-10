#include <stdio.h>
#include <stdlib.h>

char nome[2][50];
float nota[2][2], media[2];
int i,j, notas;
int main(){

//nome aluno1
printf("Insira o nome do aluno 1 e 2:\n");
	for(i=0;i<2;i++){
		gets(nome[i]);
	}
system("pause");
system("cls");
	for(i=0;i<2;i++){
		notas=0;
		printf("Insira a nota do aluno %s:\n",nome[i]);
			for(j=0;j<2;j++){
				scanf("%f",&nota[i][j]);
				notas+=nota[i][j];
			}
		media[i]=notas/2;
	}

	system("pause");
	system("cls");
	
	for(i=0;i<2;i++){
		printf("Aluno %s media: %.2f\n",nome[i],media[i]);
			if(media[i]>=7){
				printf("Aluno aprovado.\n");
			}
			
			else{
				printf("Aluno reprovado.\n");
			}
	}
}
