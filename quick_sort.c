#include<stdio.h>
int quicksort(int a[],int lb,int ub);
int partition(int a[],int lb,int ub);
void printarray(int a[],int n);

int main(){
    int a[9]={9,8,7,6,5,4,3,2,1};
    int lb=0,ub=8,n=8;
    quicksort(a,lb,ub);
    printarray(a,n);
}
int quicksort(int a[],int lb,int ub){
    
    if(lb<ub){
        int location=partition(a,lb,ub);
        quicksort(a,lb,location-1);
        quicksort(a,location+1,ub);
}}
int partition(int a[],int lb,int ub){
    int pivot=a[lb];
    int start=lb;
    int end =ub;
    while(start<end){
            while(a[start]<=pivot){
                start++;
            }
            while(a[end]>pivot){
                end--;
            }
            if(start<end){
               
                int temp;
                temp=a[start];
                a[start]=a[end];
                a[end]=temp;
            }
    }
   
    int temp;
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
            printf("\n%d\n",a[i]);
}}
