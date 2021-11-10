#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
struct pessoa{
	char cpf[16];
	char nome[100];
	char sexo[1];
	int idade;
};
//variaveis globais
struct pessoa paciente;
int total_pontos,sintomas_pontos[10]={5,1,1,1,3,10,1,1,10,3};
char sintomas_descricao[10][200]={"Tem febre?",
"Tem dor de cabeça?",
"Tem secreção nasal ouespirros?",
"Tem dor/irritação na garganta?",
"Tem tosse seca?",
"Tem difficuldade respiratoria?",
"Tem dores no corpo?",
"Tem diarréia",
"Esteve em contato com alguém positivado de covid?",
"Esteve em locais com grande aglomeração?"};

void cadastro_paciente(){
	printf("\nPara atendimento, faça seu cadastro:");
	printf("\nDigite seu CPF: ");
	fflush(stdin);
	gets(paciente.cpf);
	printf("\nDigite seu nome: ");
	fflush(stdin);
	gets(paciente.nome);
	printf("\nDigite o sexo: ");
	fflush(stdin);
	gets(paciente.sexo);
	fflush(stdin);
	printf("\nDigite a idade: ");
	scanf("%d",&paciente.idade);
	system("cls");
	printf("\nConfira seus dados:");
	printf("\nCPF: %s",paciente.cpf);
	printf("\nNome: %s",paciente.nome);
	printf("\nSexo: %s",paciente.sexo);
	printf("\nIdade: %d\n",paciente.idade);
	system("pause");
	system("cls");
}

void coleta_sintomas(){
	char resposta;
	total_pontos=0;
	int i;
	printf("\nResponda as próximas perguntas para saber a qual ala deve se dirigir");
	while(i<10){
		printf("\n%s | S-sim N-não: ",sintomas_descricao[i]);
		fflush(stdin);
		scanf("%c",&resposta);
		if((resposta=='s')||(resposta=='S')){
			total_pontos=total_pontos+sintomas_pontos[i];
			i++;
		}
		else if((resposta=='n')||(resposta=='N')){
			i++;
		}
		else{
			printf("\nValor invalido, digite novamente.");	
		}
	}
	system("pause");
	system("cls");
}

void triagem(){
	printf("O total de pontos foi %d",total_pontos);
	if(total_pontos<=9){
		printf("\nEncaminhe-se para a ala de risco BAIXO\n");
	}
	else if(total_pontos>=20){
		printf("\nEncaminhe-se para a ala de risco ALTO\n");
	}
	else{
		printf("\nEncaminhe-se para a ala de risco MEDIO\n");
	}
	system("pause");
	system("cls");
}

int main(){
	int questao;
	do{
		printf("Menu:\n-----------------------------------\n1- Cadastrar e triagem\n2- Sair\n-----------------------------------\n\nEscolha: ");
		scanf("%d",&questao);
		if((questao==1)||(questao==2)){
		
			switch(questao){
				case 1:
					system("cls");
					setlocale(LC_ALL,"Portuguese");
					cadastro_paciente();
					coleta_sintomas();
					triagem();
				break;
				
				case 2:
					system("cls");
					printf("Saindo...\n");
				break;
			}
		}
		else{
			printf("\nOpção Invalida.\n");
			system("pause");
			system("cls");
		}
	}while(questao!=2);

	return 0;
}
