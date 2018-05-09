#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

typedef struct
{
char nome[31];
int idade;

} PESSOA;

int controle = 0;
PESSOA cadastro[10];

void insere()
{
    char n[20];
    printf("\nDigite nome:");
    fflush(stdin);//limpa buffer
    gets(n);//ler uma string com espaco
    printf(n);
    strcpy(cadastro[controle].nome,n);//copia da string para o vetor
    controle++;

}

int main ()
{
    char op='s';//var para ler op do usu

    while((op=='s')&&(controle<10))//enquanto o usu quiser e tiver espaco...
     {
       insere();//chamada da funcao para inserir pessoa
       printf("\ndeseja continuar?(S/N)");
       op=getch();
     }

    return 0;

}
