#include<stdio.h>
int main(){
    int arr[50],n;
    printf("enter array size:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("after sorting:\n");
    for(int i=0;i<n;i++){
     printf("%d\n",arr[i]);
    }
    return 0;
}