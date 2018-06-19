#include <stdio.h>
#include <stdlib.h>

#define TRUE      1
#define FALSE     0
#define OK        1
#define ERROR     0
#define OVERFLOW -2

typedef int QElement;
typedef int Status;

/*
 * 存储结构
 */
typedef struct QNode
{
	QElement data;
	struct QNode *next;
}QNode, *QueuePtr;

typedef struct
{
	QueuePtr front; //队头指针
	QueuePtr rear;  //队尾指针
}LinkQueue;

/*
 * 初始化队列
 */
Status InitQueue(LinkQueue *Q)
{
	Q->front = Q->rear = (QueuePtr)malloc(sizeof(QNode));
	if(!Q->front)
	{
		exit(OVERFLOW);
	}
	Q->front->next = NULL;
	return OK;
}

/*
 * 销毁队列
 */
Status DestroyQueue(LinkQueue *Q)
{
	
}