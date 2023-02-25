#include<stdio.h>
int main(){
    int d,e;
    printf("Enter your secret number \n");
    scanf("%d%d",&d,&e);
    if(d>e){
        printf("number %d please procced",d);
    }
    else 
    printf("\nnumber %d procced",e);
    return 0;
    
}