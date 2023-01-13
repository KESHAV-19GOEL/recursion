#include<bits/stdc++.h>
using namespace std;

int pivotindex(int *arr,int start,int end)
{
int count =0;

for(int i = start+1;i<=end;i++){
if(arr[i]<arr[start])
count++;
}
int pivot = start + count;
swap(arr[start],arr[pivot]);

int index1 = start,index2 = end;
while(index1<index2)
{
while(arr[index1]<arr[pivot] && index1<pivot)
{
index1++;
}
while(arr[index2]>arr[pivot] && index2>pivot)
{
index2--;
}

swap(arr[index1++],arr[index2--]);



}


return pivot;



}
void  quick_sort(int *arr,int start,int end)
{
if(start>=end)
{
return ;
}

int pivot = pivotindex( arr,start,end);

quick_sort(arr, start,pivot-1);
quick_sort(arr, pivot+1, end);



}


int main()
{
      // int arr[] = {9,8,7,6,5,4,3,2,1};
int arr[] = {0 ,9 ,-4 ,-9 ,-9 ,-7};
     quick_sort(arr,0,5);

  for(int i=0;i<9;i++)
  {
    cout<<arr[i]<<"  "<<endl;
  }



  return 0;
}