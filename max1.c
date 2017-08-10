#include <stdio.h>

int main(void){
    int ch=1;
    int max=0;
    while(ch>0){
        printf("Enter a number:");
        scanf("%d",&ch);
        if(ch>max){
            max=ch;
        }
    }
    while(ch==0||ch<=0){
        printf("The lagest number entered was ");
        printf("%d",max);
        putchar('\n');
        break;
    }
    return 0;
}

insert a hello
 
