#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
	int ans[3], cho[3];
	int count=0, i,j;
	int strike, ball;
	
	// ���� �߻� 
		for (i=0;i<3;i++){
			srand(time(NULL));
			ans[i] = rand() % 9+1;
			for(j=0;j<i;j++){
				if(ans[i]==ans[j]){
					i--;
					break;
				}
			}  
		}
	
	//���� ���� 
	printf("Start Game!\n\n"); 
	
	while(1){ 
		strike = 0; ball = 0;
		
		// ���� ���� 
		printf("3���� ���� ���� : ");
		for(i=0;i<3;i++) scanf("%d",&cho[i]);
		
		//�Է¹��� ���� �ߺ� ���� 
		if(cho[0]==cho[1]||cho[0]==cho[2]||cho[1]==cho[2]){
		printf("���� ���ڸ� �ߺ������ �� �����ϴ�.\n\n");
		continue;	
		}	
		
		// �Է� �� 
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(ans[i]==cho[j]){
					if(i==j) strike++;
					else ball++;
				}	 
			}
		}
		
		count++;
		printf("%d��° ���� ��� : %dstrike %dball!\n\n", count, strike, ball);
		
		
		if(strike == 3) break;
	}
	
	printf("Game Over!\n %d�� ����",count);
	
}
