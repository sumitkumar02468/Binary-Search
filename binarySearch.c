#include<stdio.h>
void main()
{
int binarySearch(int arr[20],int target,int n);
int arr[20],n,count=0,target;
printf("Enter how many elements in array\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter an element which you want to search\n");
scanf("%d",&target);
count = binarySearch(arr,target,n);
if(count==-1){
printf("Element is not found\n");
}else{
printf("Element is found at index %d\n",count+1);
}
}
int binarySearch(int arr[20],int target,int n){
int first,mid,last;
first=0;
last=n-1;
while(first<last){
mid=(first+last)/2;
if(arr[first]==target){
return first;
}else if(arr[last]==target){
return last;
}else if(arr[mid]==target){
return mid;
}else if(arr[mid]>target){
last=mid-1;
}else{
first=mid+1;
}
}
return -1;
}
