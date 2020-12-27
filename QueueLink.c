#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "QueueLink.h"

/* 初始化队列 */
void InitQueueLink(QueueLink *S){
    /* 申请一个新空间 */
    QueueLink *p = (QueueLink*)malloc(sizeof(QueueLink));
    /* 设定队列的初始状态 */
    p->Next = NULL;
    /* 初始容量 */
    p->QueueLinkSize = 0;
    /* 将p赋值给S */
    S = p;
}

/* 入队，给队列添加数据，e为要添加到队列的元素 */
void PushQueueLink(QueueLink *S, Elements e){
    /* 申请一片新空间 */
    QueueLink *p = (QueueLink*)malloc(sizeof(QueueLink));
    /* 将e赋值给p的数据域 */
    p->data = e;
    /* 遍历队列到尾结点 */
    while(S->Next){
        S = S->Next;
    }
    /* 将p结点链接到队列末尾 */
    p->Next = S->Next;
    S->Next = p;
    /* 队列容量+1 */
    S->QueueLinkSize++;
}

/* 出队，删除数据 */
void PopQueueLink(QueueLink *S){
    /* 判断队列是否为空 */
    if(S == NULL){
        printf("队列为空！\n");
        return;
    }
    /* 申请一个新结点指向队列的头结点 */
    QueueLink *p = (QueueLink*)malloc(sizeof(QueueLink));
    p = S->Next;
    S->Next = p->Next;
    /* 释放p结点 */
    free(p);
    /* 容量-1 */
    S->QueueLinkSize--;
}

/* 打印队列 */
void Display(QueueLink *S){
    printf("队列的数据域 = {");
    while(S->Next){
        S = S->Next;
        printf("%d", S->data);
        if(S->Next != NULL){
            printf(", ");
        } 
    }
    printf("}\n");
}