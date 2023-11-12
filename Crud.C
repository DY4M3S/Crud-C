#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estoque
{
     char marca[1000];
     char modelo[1000];
     char tamanho[1000];
     char genero[1000];
     float preco;
};

typedef struct Estoque Estoque;

Estoque produto[1001];

int menu();

int ultimoRegistro;

void atualizar()
{
     int i;

     int opcao;
     printf("\nQual item deseja selecionar?\n\n");
     scanf("%d", &opcao);
     
      for (i=1; i < 1001; i++)
     {
          if(opcao==i)
          {
          printf("\nAtualziar novos registros:\n\n");

          int input;
          fflush(stdin);

          printf("\nMarca:\n\n");
          fgets(produto[i].marca, sizeof(produto[i].marca), stdin);
          produto[i].marca[strcspn(produto[i].marca, "\n")] = '\0';

          printf("\nModelo:\n\n");
          fgets(produto[i].modelo, sizeof(produto[i].modelo), stdin);
          produto[i].modelo[strcspn(produto[i].modelo, "\n")] = '\0';

          printf("\nTamanho:\n\n");
          fgets(produto[i].tamanho, sizeof(produto[i].tamanho), stdin);
          produto[i].tamanho[strcspn(produto[i].tamanho, "\n")] = '\0';

          printf("\nGenero:\n\n");
          fgets(produto[i].genero, sizeof(produto[i].genero), stdin);
          produto[i].genero[strcspn(produto[i].genero, "\n")] = '\0';

          printf("\nPreco:\n\n");
          scanf("%f", &produto[i].preco);
          fflush(stdin);

          printf("\nDeseja voltar para o menu principal? 1-sim, 2-continuar adicionado e 0-sair do programa\n\n");
          scanf("%d", &input);
          fflush(stdin);

          if (input == 1)
          {
               menu();
          }
          else if (input == 2)
          {
               continue;
          }
          else if (input != 1 && input != 2 && input != 0)
          {
               printf("\nNao existe essa opcao\n\n");
               system("pause");
               menu();
          }
          else if (input == 0)
          {
               exit(0);
          }
          }else
          {
               printf("\nRegistro nao encontrado\n\n");
          }
     }
}    

void lista()
{
     int i;
     for (i = 1; i < 1001; i++)
     {
          printf("\nLista dos registros(%d)\n\n", i);
          printf("Marca: %s\n", produto[i].marca);
          printf("Modelo: %s\n", produto[i].modelo);
          printf("Tamanho: %s\n", produto[i].tamanho);
          printf("Genero: %s\n", produto[i].genero);
          printf("Preco: %.2f\n\n", produto[i].preco);

          printf("\nDeseja voltar para menu pricipal? 1-sim, 2-proximo item e 0-sair do programa\n\n");
          int input;
          scanf("%d", &input);

          if (input == 1)
          {
               menu();
          }
          else if (input == 2)
          {
               continue;
          }
          else if (input != 1 && input != 2 && input != 0)
          {
               printf("\nNao existe essa opcao\n\n");
               system("pause");
               menu();
          }
          else if (input == 0)
          {
               exit(0);
          }
     }
}

void add()
{
     int i;

     for (i = 1; i < 1001; i++)
     {

          if (ultimoRegistro >= i)
          {
               i = ultimoRegistro + 1;
          }

          printf("\nAdicionar novos registros (%d):\n\n", i);

          int input;
          fflush(stdin);

          printf("\nMarca:\n\n");
          fgets(produto[i].marca, sizeof(produto[i].marca), stdin);
          produto[i].marca[strcspn(produto[i].marca, "\n")] = '\0';

          printf("\nModelo:\n\n");
          fgets(produto[i].modelo, sizeof(produto[i].modelo), stdin);
          produto[i].modelo[strcspn(produto[i].modelo, "\n")] = '\0';

          printf("\nTamanho:\n\n");
          fgets(produto[i].tamanho, sizeof(produto[i].tamanho), stdin);
          produto[i].tamanho[strcspn(produto[i].tamanho, "\n")] = '\0';

          printf("\nGenero:\n\n");
          fgets(produto[i].genero, sizeof(produto[i].genero), stdin);
          produto[i].genero[strcspn(produto[i].genero, "\n")] = '\0';

          printf("\nPreco:\n\n");
          scanf("%f", &produto[i].preco);
          fflush(stdin);

          printf("\nDeseja voltar para o menu principal? 1-sim, 2-continuar adicionado e 0-sair do programa\n\n");
          scanf("%d", &input);
          fflush(stdin);

          if (input == 1)
          {
               ultimoRegistro = i;
               menu();
          }
          else if (input == 2)
          {
               continue;
          }
          else if (input != 1 && input != 2 && input != 0)
          {
               ultimoRegistro = i;
               printf("\nNao existe essa opcao\n\n");
               system("pause");
               menu();
          }
          else if (input == 0)
          {
               exit(0);
          }
     }
}

int menu()
{
     system("cls");
     int alternativa;

     printf("\n\n****************************************\n");
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
          system("cls");
          add();
          break;

     case 2:
          system("cls");
          lista();
          break;

      case 3:
          system("cls");
          atualizar();
          break;

          // case 4:
          //  printf("Excluir um registro\n\n");
          //  break;

     case 0:
          exit(0);

     default:
          printf("Nao existe essa opcao, voltando ao menu...\n\n");
          system("pause");
          system("cls");
          menu();
     }
}

int main()
{
     menu();
}
