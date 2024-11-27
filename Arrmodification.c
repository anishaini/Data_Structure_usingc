#include<stdio.h>
int main() {
   int i,arr[10]={23,57,54,48,56,12,45,63,89,46};
    for(i=0; i<10; i++){
        printf("old arr[%d]=%d \n",i,arr[i]);
    }
    int i,arr[10]={1,2,3,4,5,6,7,8,9,};
    for(i=0; i<10; i++){
        printf("new arr[%d]=%d \n",i,arr[i]);
    }
    // int  i,arr[10]; taking user input 
    // for(i=0; i<10; i++){
    //     scanf("%d",&arr[i]); 
    // }
    // for(i=0; i<10; i++){
    //     printf("%d  " ,arr[i]);
    // }
    return 0;
}