#include<stdio.h>
int main(){
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    for(int c1=2;c1<num;c1++){
        for(int c2=2;c2<c1;c2++){
            if(c1 % c2 ==0)
                break;
            else{
                printf("%d\t",c1);
                break;
            }
        }
    }
    return 0;
}