#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "Queue.h"
/* 初始化队列 */
void InitQueue(Queue *Q){
    /* 申请空间 */
    Q->data = (Elements*)malloc(sizeof(Elements));
    /* 若申请空间失败 */
    if(Q->data == NULL){
        printf("申请空间失败！\n");
        return;
    }
    Q->fronr = Q->rear = 0;
    Q->QueueSize = 5;
}
/* 入队,e为要插入队列的元素 */
void PushQueue(Queue *Q, Elements e){
    /* 判断空间是否已满，若已满，增加空间 */
    if(Q->rear >= Q->QueueSize){
        Q->QueueSize += 5;
        Q->data = (Elements*)realloc(Q->data, Q->QueueSize*sizeof(Elements));
    }
    /* 将e插入队列 */
    Q->data[Q->rear] = e;
    Q->rear++;
}
/* 出队 */
void PopQueue(Queue *Q){
    /* 判断队列是否为空 */
    if(Q->fronr == Q->rear){
        printf("队列为空！\n");
        return;
    }
    Q->rear = (Q->rear+1) % Q->QueueSize;
    Q->rear--;
}
/* 打印队列 */
void Display(Queue *Q){
    printf("队列数据域 = {");
    for(int i = 0;i < Q->rear;i++){
        printf("%d", Q->data[i]);
        if(i < Q->rear-1){
            printf(", ");
        }
    }
    printf("}\n队列容量：%d\n", Q->QueueSize);
    printf("队列长度：%d\n\n", Q->rear);
}