#include <stdio.h>
int main(){
    int matriz[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 3, 3, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

        printf("### Tabuleiro para Batalha Naval ###\n\n");
    //loop aninhado for para exibir o tabuleirot
    for (int x = 0; x <= 9; x++) {
        for (int y = 0; y <= 9; y++) {
            printf("%d\t", matriz[x][y]);
        }
        printf("\n");
    }



    return 0;
}