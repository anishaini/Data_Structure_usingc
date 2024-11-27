#include<stdio.h>
int main(){
    int i,a[100]={1,2,3,4,5,6,7,8,9,10};
    int search, k=0;
    printf("Enter the number you want to search: ");
    scanf("%d",&search);
    for (i = 0; i < 10; i++)
    {
        if (a[i]==search)
        {
            printf("number is found at position %d\n",i);
            k++;
            break;
        }
        
    }
    if(k==0){
        printf("number is not found in the array\n");
    }
}