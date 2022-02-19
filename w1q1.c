#include<stdio.h>
int main () 
{
    char n[10], b[50],h[50];
    int r;
    
    printf("Enter your Name \n");
    scanf("%s", &n);
    printf("Enter your Regd No. \n");
    scanf("%d", &r);
    printf("Enter your Branch \n");
    scanf("%s", &b);
    printf("Enter your Hobbies \n");
    scanf("%s", &h);
    printf("\nName:%s\n", n) ;
    printf("Regd No:%d\n", r) ;
    printf("Branch:%s\n", b) ;
    printf("Hobbies:%s\n", h) ;
    return 0;
}

