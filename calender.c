#include <stdio.h>

void sep(){
	
}

int main(void){
	int cho, max,position,i,j=0;
	int cal[7][6]={0};
	
	printf("�� ���� : ");
	scanf("%d",&cho);
	
	switch(cho){
		case 9 :
			max = 30; position = 6; break;
		case 10 :
			max = 31; position = 1; break;
		case 11 :
			max = 30; position = 4; break;
		default : 
			printf("�߸��� �Է��Դϴ�.");
			break; 
	}
	
	for(i=1;i<=max;i++){
		cal[j][position] = i;
		
		position++;
		if(position>6) {
			position = 0;
			j++;
		}
	}
	

	
	printf("\n\n\n\n\t    %d��",cho);
	printf("\n\n��  ��  ȭ  ��  ��  ��  ��\n");
	for(i=0;i<6;i++){
		for(j=0;j<7;j++){
			printf("%d ",cal[i][j]);
		}
		printf("\n");
	}
	
}
