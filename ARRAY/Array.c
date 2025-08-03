#include<stdio.h>
int main(){
    int size,arr[50];
    printf("enter the size of the array:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    printf("Enter the array elements:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}