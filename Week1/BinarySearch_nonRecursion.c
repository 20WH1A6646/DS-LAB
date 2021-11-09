#include <stdio.h>
int main(){
        int n;
        int ele;
        int j;
        int low;
        int high;
        int mid;
        scanf("%d",&n);
        int a[n];
        for (i=0;i<n;i++){
                scanf("%d",&a[j]);
           }
        scanf("%d",&ele);
        int (position = binarySearch(n,a,ele,low,high));
        if( position ==-1){
           printf("Element not found");
           }
        else{
           printf("Element found at %d ",position);
           }

return 0;
}

int binarySearch(int a[],int ele,int low,int high)
{ int mid = low+high /2 ;
        while(low<high){
                if (a[mid]== ele){
                        return mid;}
                else if (a[mid] < ele){
                        low = mid +1;}
                else 
                        high = mid-1;
               }                  
        return -1;
          
return 0;
}        
