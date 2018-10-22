#include <stdio.h>

int BSearch(int ar[], int len, int target){
	int first = 0;	// Ž�� ����� ���� �ε��� ��
	int last = len-1; // Ž�� ����� ������ �ε��� ��
	int mid;
	
	while(first <= last){
		mid = (first + last)/2;	// Ž�� ����� �߾� ã�� 
		
		if(target == ar[mid]){	// Ž�� ����� Ÿ�ٰ� ���� �� 
			return mid;	// �ε��� �� ��ȯ 
		}
		
		else{
			if(target<ar[mid]){	// Ÿ���� Ž�� ��� ���� ���� �� 
				last = mid-1;	// Ž�� �迭�� last ���� mid-1
			}
			else{	// Ÿ���� Ž�� ��� ���� Ŭ �� 
				first = mid+1;	// Ž�� �迭�� first ���� mid+1 
			} 
		}
	} 
	return -1;	// Ÿ���� Ž�� ��� ���� ���� �� 
}

int main(void){
	int arr[]={1,3,5,7,9};
	int idx;
	
	idx = BSearch(arr, sizeof(arr)/sizeof(int),7 );
	if (idx==-1){
		printf("�迭 ���� Ÿ���� �������� �ʽ��ϴ�.\n");
	}
	else{
		printf("Ÿ���� �ε��� ��ȣ�� %d�Դϴ�.\n",idx);
	}
	
	idx = BSearch(arr, sizeof(arr)/sizeof(int),4 );
	if (idx==-1){
		printf("�迭 ���� Ÿ���� �������� �ʽ��ϴ�.\n");
	}
	else{
		printf("Ÿ���� �ε��� ��ȣ�� %d�Դϴ�.\n",idx);
	}
} 
