#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE	1	// TRUE 1�� ����
#define FALSE	0	// FALSE 0���� ����
#define STR_LEN	100 // STR_LEN (�迭 ����) 100���� ����

typedef int Data;	// int �ڷ����� Data��� �ڷ��� ����

typedef struct _arrayStack { // �迭 ��� Stack ����ü ����
	Data stackArray[STR_LEN];	// Stack�� �迭�� ���� 100
	int topIndex;	// Stac�� ���������� Data�� PUSH �� �ε��� 
}ArrayStack;	// ����ü _arrayStack�� ArrayStack�̶�� �ڷ������� ����

typedef ArrayStack Stack;	// ArrayStack�� Stack �̶�� �ڷ������� ����

void StackInit(Stack * pstack);	// Stack �ʱ�ȭ
int SIsEmpty(Stack * pstack);	// Stack�� ������� �˻�

void SPush(Stack * pstack, Data data);	// Stack PUSH ����
Data SPop(Stack * pstack);	// Stack POP ����
Data SPeek(Stack * pstack);	// Stack PEEK ����

#endif // !__AB_STACK_H__
