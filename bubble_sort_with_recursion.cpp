#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int size)
{

    if(size == 1 || size ==0)
    return;
   for(int i=0;i<size-1;i++)
   {
     if(arr[i]>arr[i+1])
     swap(arr[i],arr[i+1]);

   }
sort(arr,--size);

}

int main()
{
       
int arr[] = {1,23,4,5,65,76,34,11,6,76,26,54};

sort(arr,12);

for (int i = 0; i < 12; i++)
{
    cout<<arr[i]<<"  ";
}


  return 0;
}