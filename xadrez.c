#include <stdio.h>

void movimentandoTorre(int n){
    if (n > 0) {
        printf("Direita! \n");
        movimentandoTorre(n - 1);
    }
}

void movimentandoBispo(){
    for(int i = 0; i <= 5; i++){
        printf("Cima! \n");
        for(int j = i; i == j; j++){
            printf("Direita! \n");
        }
    }
}

void movimentandoRainha(int n){
    if (n > 0){
        printf("Esquerda! \n");
        movimentandoRainha(n - 1);
    }
}

int main(){
    //Declarando variável.
    int torre = 5;
    int rainha = 8;
    
    //Simulando movimentação da Torre 5 casas para a direita.
    printf("Torre: \n");
    movimentandoTorre(torre);

    //Simulando movimentação do Bispo 5 casas para a diagonal direita.
    printf("\nBispo: \n");
    movimentandoBispo();

    //Simulando movimentação da Rainha 8 casas para a diagonal esquerda.
    printf("\nRainha: \n");
    movimentandoRainha(rainha);

    //Simulando a movimentação do Cavalo em L.
    printf("\nCavalo: \n");
    
    /*
    Utilizando laço de repetição for e while.
    Mostra no console a direção do Cavalo.*/
    for (int cavalo = 1; cavalo <= 2; cavalo++){
        printf("Cima! \n");
        
        while (cavalo == 2){
            printf("Direita! \n");
            cavalo++;
        }
    } 

    return 0;
}