#include<stdio.h>
int main(){
    int x, y;
    printf("Enter Any Two Numbers:\n");
    scanf("%d%d",&x,&y);
    if (x>y)
    {
        printf("%d Is Maximum number",x);
    }
    else
    {
        printf("%d Is Maximum number",y);
    }
    return 0;
}
