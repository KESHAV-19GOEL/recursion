#include<bits/stdc++.h>
using namespace std;

int print(int n)
{
if(n==0)
return 0;
cout<<n<<endl;
return print(n-1);


}

int main()
{
       int n;
       cout<<"Enter n"<<endl;
    cin>>n;
cout<<endl<<endl;
   print(n);




  return 0;
}