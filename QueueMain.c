#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "Queue.h"
/* 主函数 */
int main(void){
    Queue *Q = (Queue*)malloc(sizeof(Queue));
    InitQueue(Q);
    for(int i = 1;i < 6;i++){
        PushQueue(Q, i);
    }
    Display(Q);
    for(int i = 0;i < Q->rear;i++){
        PopQueue(Q);
    }
    Display(Q);
    free(Q);
    return 0;
}