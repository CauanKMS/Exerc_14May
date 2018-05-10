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

int calcIdade(char nomeUser[20]){
    int i, returnVariable;
    returnVariable = 0;
    for(i=0;i<controle;i++){
        if(cadastro[i].nome == nomeUser){
            //return 2018 - cadastro[i].anonasc;
            returnVariable = 2018 - cadastro[i].anonasc;
            //return cadastro[i].anonasc;
        }
    }

   return returnVariable;
}

int main ()
{
    char op='s';//var para ler op do usu
    char userOp, idade_calc[20];
    //char ;

    while((op=='s')&&(controle<10))//enquanto o usu quiser e tiver espaco...
    {
        printf("\nMENU:\n a)Insere pessoa\n b)Calcula idade\n c)\n d)\n e)\n s)Sair\n");
        userOp = getch();

        switch (userOp){
            case 'a':
                insere();//chamada da funcao para inserir pessoa
                break;

            case 'b':
                printf("\nDigite o nome da pessoa da qual deseja saber a idade:");
                //scanf("%s", idade_calc);
                gets(idade_calc);
                printf("\nA idade dele eh: %d",calcIdade(idade_calc));
                break;

        //case 'c':

        //case 'd':

        //case 'e':
        }

        //insere();//chamada da funcao para inserir pessoa
       printf("\ndeseja continuar?(S/N)");
       op=getch();
    }

    /*printf("\n--------------\n");
    printf("%d", cadastro[0].anonasc);
    printf("\n--------------\n");
    */

    return 0;

}
