#include <stdio.h>
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n; i++){
       for (j = 0; j < n-i; j++){
           if (arr[j] < arr[j-1]){
                //swap
                swap(arr,j,j-1);
           }
       }
   }
}
void swap(int arr[], int a, int b){
    int temp =arr[a];
        arr[a]=arr[b];
        arr[b]=temp;

}
int main()
{
    int i;
    int arr[] = {23,56,1,4,8,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
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
