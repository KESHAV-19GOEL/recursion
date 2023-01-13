#include<bits/stdc++.h>
using namespace std;

long long factorial(int n)
{
if(n == 0)
return 1;

else if(n>0)
return n*factorial(n-1);

}

int main()
{
       int n;
       cout<<"Enter the number you want factorial of : "<<endl;
       cin>>n;

       cout<<factorial(n);
  return 0;
}