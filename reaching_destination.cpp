#include<bits/stdc++.h>
using namespace std;

void print(int start,int n)
{
cout<<start<<endl;

if(start == n)
return ;
return print(++start,n);


}

int main()
{
       int start ,n;

       cout<<"Enter start and end"<<endl;
       cin>>start>>n;
       
       print(start,n);
    







  return 0;
}