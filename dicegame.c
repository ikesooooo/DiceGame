#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>   

int main() {
    char name[100];
    printf("What is your name?\n");
    scanf("%99s", name);
    printf("Hello, %s!\n", name);
    
    srand(time(NULL));

    printf("Rolling the dice...\n"); 


    int die1 = (rand() % 6) + 1;
    int die2 = (rand() % 6) + 1;

    // 2つのサイコロの目の合計を計算
    int total = die1 + die2;

    // 各サイコロの目と合計値を画面に表示
    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", total);

    if(total > 7){
        printf("%s won!\n", name);
    }else{
        printf("%s lose!\n", name);
    }

    return 0; // プログラムが正常終了したことを示す
}



