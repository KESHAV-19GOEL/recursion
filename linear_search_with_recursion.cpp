#include<iostream>
using namespace std;

int index(int arr[],int size,int key)
{int n ;
if(size == 0)
return -1;

if(key == *arr)
return size;

return index(++arr,--size,key);  
}

int main()
{
       int arr[] = {2 ,6 ,3, 9, 5, 8, 7 ,12, 0};
  int size = 9;
int key;
cout<<"Enter the key you wanna search\n";
cin>>key;

  if(index(arr,size,key) == -1)
 { cout<<"The element do not exist in the array\n";
 }
  else
  {
    cout<<"The index is  "<<(size -index(arr,size,key));
  }
  
  return 0;
}