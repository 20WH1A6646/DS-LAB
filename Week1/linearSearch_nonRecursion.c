#include<stdio.h>
int main(){
        int n;
        int ele;
        int j;
       
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++){
                scanf("%d",&a[j]);
        }
        scanf("%d",&ele);

        int position = linear_search(n,a,ele);
        if (position ==-1) {
           printf("Element not found");
        }
        else {
           printf("Element found at %d ",position);
        }

return 0;
}

int linear_search (int n, int a[],int ele){
int i;
for(i=0;i<n;i++){
       if (a[i] == ele){
           return i;
           break;
       }
       }
    return -1;
}
