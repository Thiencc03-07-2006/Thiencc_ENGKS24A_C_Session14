#include <stdio.h>
#include <string.h>

int main(){
	char string[]="Cao Chi Thien";
	int i=0;
	while(strlen(string)-i>0){
		printf("[%c] ",string[strlen(string)-i-1]);
		i++;
	}
	return 0;
}
