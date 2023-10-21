#include<stdio.h>

int main(){
    int i, j, a, b, count = 0, counter=1, gameOver = 0, loopOut = 0;
    int matrix[4][4];
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            matrix[i][j] = 45;
        }
    }
    printf("------------------------------\n\n");
    printf("--Welcome to the tic tac toe--\n\n");
    printf("------------------------------\n\n");
    while(!gameOver){
        if(counter == 1){
            printf("Enter your move player X: ");
        }
        else{
            printf("Enter your move player O: ");
        }
        scanf("%d%d", &a, &b);
        if(a > 3 || b > 3){
            printf("Invalid Move!");
            break;
        }
        else{
            loopOut = 0;
            for(i=1;i<=3;i++){
                for(j=1;j<=3;j++){
                    if(i == a && j == b){
                        if(matrix[i][j] == 88 || matrix[i][j] == 79){
                            printf("\n\nOverwrite not allowed\n\n");
                            if(counter == 1){
                                counter++;
                            }
                            else{
                                counter = 1;
                            }
                            loopOut = 1;
                        }
                        else{
                            if(counter==1){
                                matrix[i][j] = 88;
                                printf("%c\t", matrix[i][j]);
                            } else{
                                matrix[i][j] = 79;
                                printf("%c\t", matrix[i][j]);
                            }
                            count++;
                            if(count == 9){
                                printf("\nGame Over!!\n");
                                gameOver = 1;
                                loopOut = 1;
                            }
                        }
                    }
                    else if(a == 0 && b == 0){
                        gameOver = 1;
                    }
                    else{
                        if(!loopOut){
                            printf("%c\t", matrix[i][j]);
                        }
                    }
                }
            printf("\n");
            }
        }
        if(counter == 1){
            counter++;
        }
        else{
            counter = 1;
        }
    }
    return 0;
}