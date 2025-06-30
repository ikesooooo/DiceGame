// dice_game.c

#include <stdio.h>  // 標準入出力のためのヘッダーファイルをインクルード
#include <stdlib.h> // ランダムな数値を生成するための関数（rand, srand）を含むヘッダーファイルをインクルード
#include <time.h>   // srand関数のシードとして時間を使用するためのヘッダーファイルをインクルード

int main() {
    // 乱数生成器を初期化する
    // time(NULL)は現在の時刻を返し、毎回異なるシード値を提供することで、
    // プログラムを実行するたびに異なる乱数列が生成されるようにする
    srand(time(NULL));

    printf("Rolling dice...\n"); // サイコロを振ることを示すメッセージを表示

    // 1から6までのランダムな整数を2つ生成
    // rand() % 6 は0から5の値を生成するので、+1することで1から6の範囲にする
    int die1 = (rand() % 6) + 1;
    int die2 = (rand() % 6) + 1;

    // 2つのサイコロの目の合計を計算
    int total = die1 + die2;

    // 各サイコロの目と合計値を画面に表示
    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", total);

    if(total > 7){
        printf("You won\n");
    }else{
        printf("You lose\n");
    }

    return 0; // プログラムが正常終了したことを示す
}

