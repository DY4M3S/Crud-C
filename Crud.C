#include <stdio.h>
#include <conio.h>

int selecione(int alternativa){
if  (alternativa==1){
     printf("Adicionar Registros");
     
}else if(alternativa==2){
     printf("Listar Registros");
}else if(alternativa==0){
     printf("Deseja sair do programa?");  
}

}

void menu(){
     printf("Seja bem-vindos a loja All T-Shirt!!\n\n Menu principal:\n\n 1-Adiconar um novo registro\n 2-Listar todos os registros\n 0-Sair do programa\n");
     int alternativa;
     scanf( "%d",&alternativa);
     selecione(alternativa);
}



int main()
{
     menu();
    
     return 0;
}
