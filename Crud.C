#include <stdio.h>
#include <stdlib.h>

int menu()
{
     int alternativa;

     printf("Seja bem-vindos a loja All T-Shirt!!\n\n Menu principal:\n\n 1-Adiconar um novo registro\n 2-Listar todos os registros\n 3-Atualizar as informacoes do registro\n 4-Excluir um registro\n 0-Sair do programa\n\n");

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
