#ifndef QUEUELINK_H_
#define QUEUELINK_H_

typedef int Elements;
typedef struct QueueLink{
    Elements data;              /* 数据域 */
    struct QueueLink *Next;     /* 指向下一个结点的指针 */
}QueueLink;

/* 初始化队列 */
void InitQueueLink(QueueLink*);
/* 入队 */
void PushQueueLink(QueueLink*, Elements);
/* 出队 */
void PopQueueLink(QueueLink*);
/* 打印队列 */
void Display(QueueLink*);

#endif//QUEUELINK_H_