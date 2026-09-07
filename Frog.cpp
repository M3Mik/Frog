#include<stdio.h>
int main(){
    int x,y,c,r;
    scanf("%d %d",&x,&y);
    r = y%x;
    c = y/x;
    if (r!=0){
        c += 1;
    }
    if (x>y){
        c += 1;
    }
    printf("%d",c);
}