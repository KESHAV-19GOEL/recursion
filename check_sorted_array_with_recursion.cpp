#include<bits/stdc++.h>
using namespace std;

bool ispossible(int arr[],int size)
{
if(size ==0|| size ==1)
return true;

if(arr[0]>arr[1])
return false;

return ispossible(++arr,--size);






}

int main()
{
       
int arr[10];
cout<<"Enter elements of array\n";
for(int i=0;i<10;i++)
cin>>*(arr+i);

if(ispossible(arr,10))
cout<<"Given array is sorted\n";

else
cout<<"Array is not sorted\n";


  return 0;
}