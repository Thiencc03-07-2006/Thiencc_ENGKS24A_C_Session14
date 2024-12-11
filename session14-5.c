#include <stdio.h>
#include <string.h>

int main(){
    char string[1000]="Cao Chi Thien";
    int count=0,i=0,check=0;
    while(i<strlen(string)){
        if(string[i]!=' '){
            if(!check){
                count++;
                check=1;
            }
        }else{
            check=0;
        }
        i++;
    }
    printf("Chuoi ban dau: [%s]\n",string);
    printf("So tu trong chuoi la: %d",count);
    return 0;
}
