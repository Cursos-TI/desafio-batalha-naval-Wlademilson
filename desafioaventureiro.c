#include <stdio.h>
int main(){
    int tabuleiro[10][11];//matriz construida 10 x 11 para facilitar a indexação das linhas e colunas
    char coluna[11] ={'\n', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};



    // Atribuindo valores à matriz
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 11; y++) {
            tabuleiro[x][y] = 0; 
        }
    }

    //exibir tabuleiro
    printf("### BATALHA NAVAL ###\n\n");

    for(int x = 0; x < 11; x++){
        printf("%c \t", coluna[x]);//exibir o nome das colunas
    }
        printf(" \n");
     
    //Navios na vertical
    for (int y = 4; y < 7; y++){
        tabuleiro [y][2] = 3;
    }
    //Navios na horinzontal
    for (int x = 1; x < 4; x++){
        tabuleiro[0][x] = 3;
    }
    //Navios na diagonal para baixo
    for(int x = 0; x < 3; x++){
        for(int y = 5; y < 8; y++){
            if(x==0 && y==5 || x==1 && y==6 || x==2 && y==7){
            tabuleiro[x][y] = 3;
            } else{
            tabuleiro[x][y] = 0;
            }
        }
    }
    //Navios na diagonal para cima
    for(int x = 5; x < 8; x++){
        for(int y = 6; y > 3; y--){
            if(x == 5 && y == 6 || x == 6 && y == 5 || x == 7 && y == 4){
            tabuleiro[x][y] = 3;
            } else{
            tabuleiro[x][y] = 0;
            }
        }
    }   
    
     
    //exibir o tabuleiro
    for(int x = 0; x < 10; x++){
        if(x < 10) {
            tabuleiro[x][0] = x + 1;// exibir o numero de linhas
        }
        for(int y = 0; y < 11; y++){
            printf("%d \t", tabuleiro[x][y]);
        }
        printf(" \n");
        
    }
    
    

    return 0;
}