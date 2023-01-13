#include<iostream>
using namespace std;

int power(int a,int b)
{


if(b==1)
 return a;

if(b&1)
return a*power(a,b/2)*power(a,b/2);

else
return power(a,b/2)*power(a,b/2);


}



int main()
{
       int a,b;
       cout<<"Enter a and b to get a^b"<<endl;
       cin>>a>>b;

      int c =  power(a,b);

   cout<<"a^b is : "<<c;




  return 0;
}