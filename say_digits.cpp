#include<bits/stdc++.h>
using namespace std;

void say(int n)
{
string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

if(n/10 == 0)
{ cout<<str[n%10]<<"\t";
return;
}
say(n/10);
cout<<str[n%10]<<"\t";


}

int main()
{
       
int n;

cout<<"Enter n :\n";
cin>>n;

say(n);






  return 0;
}