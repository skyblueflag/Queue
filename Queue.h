#ifndef QUEUE_H_
#define QUEUE_H_
typedef int Elements;
typedef struct Queue{
    Elements *data;      /* 数据域 */
    int fronr;           /* 队头元素 */
    int rear;            /* 队尾元素 */
    int QueueSize;       /* 队列容量 */
}Queue;
/* 初始化队列 */
void InitQueue(Queue*);
/* 入队 */
void PushQueue(Queue*, Elements);
/* 出队 */
void PopQueue(Queue*);
/* 打印队列 */
void Display(Queue*);
#endif//QUEUE_H_