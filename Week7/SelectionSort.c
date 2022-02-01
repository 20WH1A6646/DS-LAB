#include<stdio.h>
void selectionSort(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        int start =0,end=n-i-1;
        int maxIndex= getMax(arr,start,end);

        swap(arr,maxIndex,end);
        }
}

int getMax(int arr[],int start,int end){
    int i;
    int max = start;
    for(i=start;i<=end;i++){
        if(arr[max]<arr[i]){
            max =i;
    }
}
return max;
}
void swap(int arr[],int a,int b){
    int temp =arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
int main()
{
    int i;
    int arr[] = {23,56,1,4,8,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    for (i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*OUTPUT:

Sorted array:
1 3 4 8 23 56

*/
