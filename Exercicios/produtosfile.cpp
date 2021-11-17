#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
struct produto{
	int codigo;
	char nome[100];
	float valor;
	int quantidade;
};

struct produto produtos[200];
int opcao, sequencia=0,resultado=0,i,busca = 0;
const int A=1,F=2,C=3;
const char sta[3][100]={"A fazer","fazendo","concluido"};

void printar(int i){
	printf("\nCodigo: %d",produtos[i].codigo);
	printf("\nTitulo: %s",produtos[i].nome);
	printf("\nDescricao: %.2f",produtos[i].valor);
	printf("\nResposavel: %d",produtos[i].quantidade);
	printf("\n*********************************\n");
}

FILE* abre_arquivo(char caminho[50],char modo[2]){
	FILE *arquivo;
	arquivo = fopen(caminho,modo);
	if(arquivo==NULL){
		printf("não foi possivel abrir o arquivo");
	}
	return arquivo;
}

void fecha_arquivo(FILE *arquivo){
	fclose(arquivo);
}

void cadastrar_produtos(){
	bool cadastro=true;
	char continuar;
	do{
		FILE *arquivo;
		system("cls");
		produtos[sequencia].codigo=sequencia+1;
		printf("\nDigite o nome do produto: ");
		fflush(stdin);
		gets(produtos[sequencia].nome);
		fflush(stdin);
		printf("\nDigite o valor do produto: ");
		fflush(stdin);
		scanf("%f",&produtos[sequencia].valor);
		fflush(stdin);
		printf("\nDigite a quantidade deste produto: ");
		fflush(stdin);
		scanf("%d",&produtos[sequencia].quantidade);
		fflush(stdin);
		printf("\nInsira S para continuar inserindo produtos | N para sair deste loop: ");
		scanf("%c",&continuar);
		arquivo = fopen("listamento_produto.txt","a");
		fprintf(arquivo,"\nCodigo: %d\nNome: %s\nValor: %.2f\nQuantidade: %d\n--------------------\n"
					,produtos[sequencia].codigo 
					,produtos[sequencia].nome 
					,produtos[sequencia].valor 
					,produtos[sequencia].quantidade);
		fecha_arquivo(0);
		if((continuar=='N') || (continuar=='n')){
			cadastro=false;
		}
		sequencia++;
	}while(cadastro==true);
}

void todos_produtos(){
	system("cls");
	if(produtos[0].codigo>0){
		for(i=0;i<sequencia;i++){
			printar(i);
		}
	}
	else{
		printf("\nNenhum projeto cadastrado");
	}
	system("pause");
}

busca_codigo(){
	int i,resultado = 0;
	bool achou;
	system("cls");
	printf("\nDigite o codigo de busca:");
	scanf("%d", &busca);
	for(i=0;i<busca;i++){
		if(produtos[i].codigo==busca){
			printar(i);
			resultado++;
		}
	}
		if(resultado==0){
		printf("\nProjeto não encontrado\n");
	}
	system("pause");
}

void alterar(){
	resultado = 0;
	system("cls");
	printf("Insira o codigo do projeto: ");
	scanf("%d",&busca);
	for(i=0;i<busca;i++){
		if(produtos[i].codigo==busca){
			printar(i);
			resultado++;
			system("pause");
			system("cls");
			FILE *arquivo;
			arquivo = fopen("listamento_produto.txt","r+");
			scanf("%d",&produtos[sequencia].quantidade);
			arquivo = fseek("");
			fflush(stdin);
		}
	}
		if(resultado==0){
			printf("\nProjeto não encontrado\n");
			system("pause");
		}
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	do{
		system("cls");
		printf("\nDigite 1 para cadastrar produtos\nDigite 2 para imprimir todos os produtos\nDigite 3 para alterar a quantidade\nDigite 4 para buscar por codigo\nDigite 5 para sair da aplicação\n---------------------------------------------------\n");
		printf("\nEscolha a opcao: ");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				cadastrar_produtos();
			break;
			
			case 2:
				todos_produtos();
			break;
			
			case 3:
				alterar();
			break;
			
			case 4:
				busca_codigo();
			break;
			
			case 5:
				printf("\nSaindo da aplicação.");
			break;
			
			default:
				printf("\nOpção inválida\n");
				system("pause");
		}
	}while(opcao!=5);
}
