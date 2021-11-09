#include <stdio.h>
//int binarySearch(int a[],int ele, int low, int high);
int main(){
        int n;
        int ele;
        int j;
        int low;
        int high;
        int mid;
        int position;
        int i;
        scanf("%d",&n);
        int a[n];
        for (i=0;i<n;i++){
                scanf("%d",&a[j]); }
        scanf("%d",&ele);
        position = binarySearch(n,a,ele,low,high);
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
                        return binarySearch(a,ele,mid+1 ,high);
                }
                else 
                        return binarySearch(a,ele,low,mid-1);
                    
               }                  
        return -1;
          
return 0;
}        
