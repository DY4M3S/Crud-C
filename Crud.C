#include <stdio.h>
#include <stdlib.h>

int menu()
{
     int alternativa;

     printf("****************************************\n");
     printf("*Seja bem-vindos a loja All T-Shirt!!  *\n*                                      *\n");
     printf("*Menu principal:                       *\n*                                      *\n");
     printf("*1-Adiconar um novo registro           *\n"); 
     printf("*2-Listar todos os registros           *\n"); 
     printf("*3-Atualizar as informacoes do registro*\n"); 
     printf("*4-Excluir um registro                 *\n"); 
     printf("*0-Sair do programa                    *\n"); 
     printf("****************************************\n");

     scanf("%d", &alternativa);

     switch (alternativa)
     {
     case 1:
          printf("Adiconar um novo registro\n\n");
          break;

     case 2:
          printf("Listar todos os registros\n\n");
          break;

     case 3:
          printf("Atualizar as informacoes do registro\n\n");
          break;

     case 4:
          printf("Excluir um registro\n\n");
          break;

     case 0:
          exit(0);
     }
}

void voltar()
{
     menu();
}

int preco[100];
char marca[100];
char modelo[100];
char tamanho[100];
char genero[100];

int main()
{
     menu();

      return 0;
}
