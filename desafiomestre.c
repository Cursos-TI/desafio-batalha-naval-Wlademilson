#include <stdio.h>
int main(){
    int tabuleiro[10][11];//matriz construida 10 x 11 para facilitar a indexação das linhas e colunas
    char coluna[11] ={'\n', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int x, y;


    // Atribuindo valores à matriz
    for (x = 0; x < 10; x++) {
        for (y = 0; y < 11; y++) {
            tabuleiro[x][y] = 0; 
        }
    }

    //exibir tabuleiro
    printf("### BATALHA NAVAL ###\n\n");

    for(x = 0; x < 11; x++){
        printf("%c \t", coluna[x]);//exibir o nome das colunas
    }
        printf(" \n");
     
    //Navios na vertical
    for (y = 4; y < 7; y++){
        tabuleiro [y][2] = 3;
    }
    //Navios na horinzontal
    for (x = 1; x < 4; x++){
        tabuleiro[1][x] = 3;
    }
    //Navios na diagonal para baixo
    for(x = 1; x < 4; x++){
        for(y = 5; y < 8; y++){
            if(x==1 && y==5 || x==2 && y==6 || x==3 && y==7){
            tabuleiro[x][y] = 3;
            } else{
            tabuleiro[x][y] = 0;
            }
        }
    }
    //Navios na diagonal para cima
    for(x = 5; x < 8; x++){
        for(y = 6; y > 3; y--){
            if(x == 5 && y == 6 || x == 6 && y == 5 || x == 7 && y == 4){
            tabuleiro[x][y] = 3;
            } else{
            tabuleiro[x][y] = 0;
            }
        }
    }
   //habilidade cone
   for(x = 1; x < 4; x++){
        for(y = 3; y < 8; y++){
            if(tabuleiro[x][y] == 3 && x == 1 && y >= 3 && y <= 7 || tabuleiro[x][y] == 3 && x == 2 && y >= 4 && y <= 6 ||
               tabuleiro[x][y] == 3 && x == 3 && y == 5){
                tabuleiro[x][y] = 5;            
            } else if(x == 1 &&  y >= 3 && y <= 7 || x == 2 && y >= 4 && y <= 6 || x == 3 && y == 5){
                tabuleiro[x][y] = 1;
            } else if(tabuleiro[x][y] == 3){
                tabuleiro[x][y] = 3;
            } else {
                tabuleiro[x][y] = 0;
            }
        }
    }

    //Habilidade octaedro
    for(x = 4; x < 7; x++){
        for(y = 1; y < 4; y++){
            if(tabuleiro[x][y] == 3 && x >= 4 && x <= 6 &&  y == 2 || tabuleiro[x][y] == 3 && x == 5 && y >= 1 && y <= 3 ){
                tabuleiro[x][y] = 5;            
            } else if(x >= 4 && x <= 6 &&  y == 2 || x == 5 && y >= 1 && y <= 3){
                tabuleiro[x][y] = 1;
            } else if(tabuleiro[x][y] == 3){
                tabuleiro[x][y] = 3;
            } else {
                tabuleiro[x][y] = 0;
            }
        }
    }

    //Habilidade cruz
    for(x = 4; x < 7; x++){
        for(y = 6; y < 11; y++){
            if(tabuleiro[x][y] == 3 && x >= 4 && x <= 6 &&  y == 8 || tabuleiro[x][y] == 3 && x == 5 && y >= 6 && y <= 10 ){
                tabuleiro[x][y] = 5;            
            } else if(x >= 4 && x <= 6 &&  y == 8 || x == 5 && y >= 6 && y <= 10){
                tabuleiro[x][y] = 1;
            } else if(tabuleiro[x][y] == 3){
                tabuleiro[x][y] = 3;
            } else {
                tabuleiro[x][y] = 0;
            }
        }
    }
    
    //exibir o tabuleiro
    for(x = 0; x < 10; x++){
        if(x < 10) {
            tabuleiro[x][0] = x + 1;// exibir o numero de linhas
        }
        for(y = 0; y < 11; y++){
            printf("%d \t", tabuleiro[x][y]);
        }
        printf(" \n");
        
    }
    
    

    return 0;
}