#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int start,int end)
{
    int mid = start + (end-start)/2;

int arrindex = start;
int len1= mid - start+1,len2 = end - mid; 
// assigning both arrays to get sorted
int * arr1 = new int[len1];
int * arr2 = new int[len2];

for(int i = 0; i < len1;i++)
 {   arr1[i] = arr[arrindex++];
}


for(int i = 0; i < len2; i++)
{
    arr2[i] = arr[arrindex++];
    
}


arrindex = start;



// merging



int index1 =0;
int index2 = 0;

while((index1 <len1)&&(index2 < len2))
{
   // arr[arrindex++] = (arr1[index1]>arr2[index2]) ? arr2[index2++] : arr1[index1++];
    
if(arr1[index1]>arr2[index2])
{arr[arrindex++] = arr2[index2++];
}
else{ arr[arrindex++] = arr1[index1++];
}

}


while(index1<len1)
{arr[arrindex++] = arr1[index1++];
}


  while(index2<len2)
{    arr[arrindex++] = arr2[index2++];
}

delete []arr1;
delete []arr2;

}



void merge_sort(int *arr,int start,int end)
{
int mid;
mid = start + (end-start)/2;

if(start>=end)
{ return; }

merge_sort(arr, start,mid);
merge_sort(arr,mid+1 ,end);

merge(arr,start,end);



}



int main()
{
       
int arr[] = {234,256,86,2,11,35,76,34,53,22,1}; 

merge_sort(arr,0,10);

for (int i = 0; i <= 10; i++)
{
    cout<<arr[i]<<"\t";
}


  


  return 0;
}