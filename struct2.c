#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char name[20];
	int age;
	char address[20];
}Person;

int main(void){
	//struct Person p1 ;
	Person *p1= (Person*) malloc((sizeof(Person)));
	
	//strcpy(p1.name,"�����");
	//strcpy((*p1).name,"�����");
	strcpy(p1->name,"�����");
	 
	p1->age = 17;
	strcpy(p1->address,"��⵵ ��õ��");
	
	printf("%s\t%d\t%s",p1->name,p1->age,p1->address); 
}
