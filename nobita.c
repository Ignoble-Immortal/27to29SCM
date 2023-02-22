#include <stdio.h>
void main(){
    int t;
    int x,n;
    printf("No.of test cases:");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        printf("Enter number of candies and friends:\n");
        scanf("%d %d",&x,&n);
        int y=x%n;
        if(y<=n/2){
            printf("%d are the number of candies returned",y);
        }
        else{
            printf("%d are the number of candies asked",n-y);
        }
    }
}