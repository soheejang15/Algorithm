#include <stdio.h>
#include <stdlib.h>

// int Ÿ���� ������ BTData Ÿ���� ���� 
typedef int BTData;

int sum = 0;

// ����Ʈ���� ��带 ����ü�� ����. 
//data/ left link (������) / right link (������)  
typedef struct _bTreeNode{
	BTData data;
	struct _bTreeNode * left;
	struct _bTreeNode * right;
}BTreeNode;

/*void SumAllValue(int data){
	sum += data;
}*/

/*
//���� ��ȸ
void PreorderTraverse(BTreeNode * bt){
	if(bt == NULL) return;
	PreorderTraverse(bt->data);
	printf("%d \n",bt->left);
	PreorderTraverse(bt->right);

} 
*/

//���� ��ȸ 
void InorderTraverse(BTreeNode * bt){
	if(bt == NULL) return;
	InorderTraverse(bt->left);
	printf("%d \n",bt->data);
	InorderTraverse(bt->right);

}

//���� ��ȸ
int  PostorderTraverse(BTreeNode * bt){
		
	if(bt == NULL) return;
	PostorderTraverse(bt->left);
	PostorderTraverse(bt->right);
	return sum += bt->data;
}

BTreeNode * MakeExpTree(char exp[]);
int EvaluateExpTree(BTreeNode * bt);

void ShowPrefixTypeExp(BTreeNode *bt);
void ShowInfixTypeExp(BTreeNode *bt);
void ShowPostfixTypeExp(BTreeNode *bt);


BTreeNode * MakeBTreeNode(void){
	BTreeNode *nd = (BTreeNode*)malloc(sizeof(BTreeNode));
	
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

BTData GetData(BTreeNode *bt){
	return bt->data;
}

void SetData (BTreeNode * bt, BTData data){
	bt->data = data;
}

BTreeNode * GetLeftSubTree(BTreeNode * bt){
	return bt->left;
}

BTreeNode * GetRightSubTree(BTreeNode * bt){
	return bt->right;
}

void MakeLeftSubTree(BTreeNode * main, BTreeNode *sub){
	if (main->left != NULL)
		free(main->left);
		
	main->left = sub;
}

void MakeRightSubTree(BTreeNode * main, BTreeNode *sub){
	if (main->right != NULL)
		free(main->right);
		
	main->right = sub;
}

int main(void){
	// ��� ���� 
	BTreeNode * bt1 = MakeBTreeNode();
	BTreeNode * bt2 = MakeBTreeNode();
	BTreeNode * bt3 = MakeBTreeNode();
	BTreeNode * bt4 = MakeBTreeNode();
	BTreeNode * bt5 = MakeBTreeNode();
	BTreeNode * bt6 = MakeBTreeNode();
	BTreeNode * bt7 = MakeBTreeNode();
	BTreeNode * bt8 = MakeBTreeNode();
	BTreeNode * bt9 = MakeBTreeNode();
	BTreeNode * bt10 = MakeBTreeNode();
	BTreeNode * bt11 = MakeBTreeNode();
	
	// ��� �� ���� 
	SetData(bt1, 0);
	SetData(bt2, 0);
	SetData(bt3, 10);
	SetData(bt4, 2);
	SetData(bt5, 15);
	SetData(bt6, 40);
	SetData(bt7, 68);	
	SetData(bt8, 200);
	SetData(bt9, 100);
	SetData(bt10, 55); 
	SetData(bt11, 120);
	
	// ����Ʈ�� (���) ���� 
	MakeLeftSubTree(bt1, bt2);
	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);
	MakeRightSubTree(bt2, bt5);
	MakeLeftSubTree(bt3, bt6);
	MakeRightSubTree(bt3, bt7);
	MakeLeftSubTree(bt4, bt8);
	MakeRightSubTree(bt4, bt9);
	MakeLeftSubTree(bt7, bt10);
	MakeRightSubTree(bt7, bt11);
	
	// Ʈ�� ��� 
	printf("%d \n",GetData(bt1));
	
	printf("%d %d\n",GetData(GetLeftSubTree(bt1)),GetData(GetRightSubTree(bt1)));
	
	printf("%d %d ",GetData(GetLeftSubTree(GetLeftSubTree(bt1))), GetData(GetRightSubTree(GetLeftSubTree(bt1))));
	printf("%d %d\n",GetData(GetLeftSubTree(GetRightSubTree(bt1))), GetData(GetRightSubTree(GetRightSubTree(bt1))));
	
	printf("%d %d ",GetData(GetLeftSubTree(GetLeftSubTree(GetLeftSubTree(bt1)))),GetData(GetRightSubTree(GetLeftSubTree(GetLeftSubTree(bt1)))));
	printf("%d %d\n",GetData(GetLeftSubTree(GetRightSubTree(GetRightSubTree(bt1)))), GetData(GetRightSubTree(GetRightSubTree(GetRightSubTree(bt1)))));
	
	// C: �뷮 
	printf("\n\nC: �뷮 : %d\n",PostorderTraverse(bt1));
	
	sum = 0;
	// F3 �뷮 
	printf("F3 �뷮 : %d\n",PostorderTraverse(bt3));

	sum = 0;	
	//F4 �뷮 
	printf("F4 �뷮 : %d\n",PostorderTraverse(bt4)); 
}

