#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "QueueLink.h"

int main(){
    QueueLink *S = (QueueLink*)malloc(sizeof(QueueLink));
    InitQueueLink(S);
    printf("初始化成功！\n");
    printf("入队，添加数据。\n");
    for(int i = 1;i < 6;i++){
        PushQueueLink(S, i);
    }
    Display(S);
    printf("\n");
    printf("出队，删除数据。\n");
    for(int i = 0;i < 3;i++){
        PopQueueLink(S);
    }
    Display(S);
    free(S);

    return 0;
}