#include <stdio.h>
#include <wchar.h>

int main(void){
	int i;
	wchar week[7] = {L'��',L'ȭ',L'��',L'��',L'��',L'��',L'��'};
	for (i=0;i<7;i++){
		wprintf(L"%c ",week[i]);
	}
}
