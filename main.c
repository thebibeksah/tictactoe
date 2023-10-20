#include<stdio.h>

int main(){
    int i, j, a, b, counter=1, game;
    int matrix[4][4];
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            matrix[i][j] = 45;
        }
    }
    printf("------------------------------\n\n");
    printf("--Welcome to the tic tac toe--\n\n");
    printf("------------------------------\n\n");
    for(game=1; game<=9; game++){
        printf("Enter your move player %d: ", counter);
        scanf("%d%d", &a, &b);
        if(a > 3 || b > 3){
            printf("Invalid Move!");
            break;
        }else{
            for(i=1;i<=3;i++){
                for(j=1;j<=3;j++){
                    if(i == a && j == b){
                        if(counter==1){
                            matrix[i][j] = 88;
                            printf("%c\t", matrix[i][j]);
                        } else{
                            matrix[i][j] = 79;
                            printf("%c\t", matrix[i][j]);
                        }
                    }
                    else if(a == 0 && b == 0){
                        break;
                    }
                    else{
                        printf("%c\t", matrix[i][j]);
                    }
                }
                printf("\n");
        }
        if(counter == 1){
            counter++;
        }
        else{
            counter = 1;
        }
        }
    }
    return 0;
}