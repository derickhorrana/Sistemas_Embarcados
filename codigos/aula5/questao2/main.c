//arquivo ola_usuario_1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char string[80], nome[30], idade[4];
	int i=0;
	FILE *p;
	printf("Qual seu nome\n");
	scanf("%s", nome);
	printf("Qual sua idade\n");
	scanf("%s", idade);

	//criar arquivo
	sprintf(string, "%s.txt", nome); //junta os nomes do arquivo
	
	
	p = open(string, O_RDWR | O_CREAT) /* Caso ocorra algum erro na abertura do arquivo..*/
	if(p==-1)
	{
		printf("Erro na abertura do arquivo.\n");
		exit(-1);
	}
	
	//escrever no arquivo
	//strlen(string) o resutlado � a quantidade de caracters
	//fwrite(p, string, strlen(string)); outro modo de escrever no arquivo
	//putc('\n', pf); usado para la�os
	
	fprintf(p, "Nome: %s\n", nome); // escreve no arquivo
	
	fprintf(p, "Idade: %s anos.\n", idade);  // escreve no arquivo
	
return 0;

}
