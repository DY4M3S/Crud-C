#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estoque
{
     char marca[100];
     char modelo[100];
     char tamanho[100];
     char genero[100];
     float preco;
};

typedef struct Estoque Estoque;

Estoque produto[1001];

int menu();

void lista()
{
     int i;
     for (i = 1; i < 1001; i++)
     {

          printf("Lista dos registros(%d)\n\n", i);
          printf("Marca: %s\n", produto[i].marca);
          printf("Modelo: %s\n", produto[i].modelo);
          printf("Tamanho: %s\n", produto[i].tamanho);
          printf("Genero: %s\n", produto[i].genero);
          printf("Preco: %2.f\n\n", produto[i].marca);
     }
}

void add()
{
     int i;

     for (i = 1; i < 1001; i++)
     {
          printf("\nAdicionar novos registros (%d):\n\n ", i);
          printf("\nMarca:\n\n");
          scanf("%s", &produto[i].marca);
          fflush(stdin);
          printf("\n\nModelo:\n\n");
          scanf("%s", &produto[i].modelo);
          fflush(stdin);
          printf("\nTamanho:\n\n");
          scanf("%s", &produto[i].tamanho);
          fflush(stdin);
          printf("\nGenero:\n\n");
          scanf("%s", &produto[i].genero);
          fflush(stdin);
          printf("\nPreco:\n\n");
          scanf("%2.f", &produto[i].preco);
          fflush(stdin);

          printf("\nDeseja voltar para menu pricipal? 1-sim, 2-nao e 0-sair\n\n");
          int input;
          scanf("%d", &input);

          if (input == 1)
          {
               menu();
          }
          else if (input == 0)
          {
               exit(0);
          }
     }
     system("cls");
}

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
     printf("****************************************\n\n");

     scanf("%d", &alternativa);

     switch (alternativa)
     {
     case 1:
          add();
          break;

     case 2:
          lista();
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

int main()
{
     menu();
}
