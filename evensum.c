
#include<stdio.h>
int main(){
    int i,j=2,n,sum=0;
    printf("Enter the number of even number:");
    scanf("%d",&n);
    printf("The even numbers are:");
    for(i=1;i<=n;i++){
        printf("%d ",j);
        j=j+2;
    }
    j=2;
    for(i=1;i<=n;i++){
    sum=sum+j;
    j=j+2;
    }
    printf("\nThe sum of even numbers is:%d",sum);
    return 0;

}
