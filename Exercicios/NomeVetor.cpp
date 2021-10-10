#include <stdio.h>
#include <stdlib.h>
char nome[3][100]={"lucca","rossi","toniatto"};//vetor string
int numero[10]={1,2,3,4,5,6,7,8,9,10};
int cinema[4][200];
int main()
{
	printf("%s %s %s\n",nome[0],nome[1],nome[2]); //linhas começam em 0 no vetor tu vai entender
	printf("Teste de print de vetor 1 a 10 abaixo\n");
		int i;
		for(i=0;i<10;i++)
		{
		printf("[%d]\n", numero[i]);
		}
		system("pause");
		system("cls");
		
//-------------------------------------------------------------------------------------

			int l,c,setor,cadeira;
			setor=1;
				for(l=0;l<4;l++)//posição de linha
				{
					cadeira=1;//reseta o valor da cadeiar
					for(c=0;c<200;c++)//posição de coluna
					{
						cinema[l][c]=cadeira;
						printf("[%d]x[%d]=%d\n",l,c,cinema[l][c]);
						cadeira++;	
					}
				 setor++;	
				}
	
}
