#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

typedef struct
{
char nome[31];
char rg[50];
int anonasc;

} PESSOA_EXE2;

int controle = 0;
PESSOA_EXE2 cadastro[10];

void insere()
{
    char n[20], r[100];
    int a;

    //NOME
    printf("\nDigite nome:");
    fflush(stdin);//limpa buffer
    gets(n);//ler uma string com espaco
    printf(n);
    strcpy(cadastro[controle].nome, n);//copia da string para o vetor

    //RG
    printf("\nDigite rg:");
    fflush(stdin);//limpa buffer
    gets(r);//ler uma string com espaco
    printf(r);
    strcpy(cadastro[controle].rg, r);//copia da string para o vetor

    //ANO NASCIMENTOS
    printf("\nDigite ano nascimento:");
    fflush(stdin);//limpa buffer
    //get();//ler uma string com espaco
    scanf("%d", &a);
    printf("%d", a);
    //strcpy(cadastro[controle].anonasc, &a);//copia da string para o vetor
    cadastro[controle].anonasc = a;

    controle++;

}

int main ()
{
    char op='s';//var para ler op do usu

    while((op=='s')&&(controle<10))//enquanto o usu quiser e tiver espaco...
    {
        /*
        switch (userOp){
        case 'a':
            insere();//chamada da funcao para inserir pessoa

        case 'b':

        case 'c':

        case 'd':

        case 'e':
        }*/

        insere();//chamada da funcao para inserir pessoa
       printf("\ndeseja continuar?(S/N)");
       op=getch();
    }

    /*printf("\n--------------\n");
    printf("%d", cadastro[0].anonasc);
    printf("\n--------------\n");
    */

    return 0;

}
