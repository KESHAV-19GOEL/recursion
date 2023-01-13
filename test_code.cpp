#include<bits/stdc++.h>
using namespace std;
int search(int *input,int n,int key)
{


int start =0,end = n;
int mid = start + (end-start)/2;

cout<<input[mid]<<endl;



if(input[mid] == key)
return mid;

if(input[mid] > key)
{
    end = mid-1;
}

if(input[mid] < key)
{
    start = mid+1;
}
if(start>=end)
return -1;

return search(input + start, end - start, key);

}

int main()
{
       //end = 9  anad start = 8
  int input[]  = {1,2,3,4,5,6,7,8,9,10};

   cout<<search(input,9,11);


long long i = 234;
   string str = to_string(i);
   cout<<endl<<endl<<str<<"\t"<<str.length();





  return 0;
}







