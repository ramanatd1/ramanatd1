#include<iostream>
int main()
{
using namespace std;
int a;
int b;
int c;
int d;
int e;
int f;
int g;
cout<<"Enter first number"<<endl;
cin>> a;
cout<<"Enter first number:"<<endl;
cin>> b;
c=a+b;
cout<<c<<endl;
d=a-b;
cout<<d<<endl;
e=a*b;
cout<<e<<endl;
//cout<<"problem line"<<endl;
//this goes before the line you are unsure of to test if there is a problem
if (b==0)
{//scope, similar to int main (smaller)
cout<<"Error"<<endl;
}
else
{
f=a/b;
};

cout<<f<<endl;

g=a%b;
cout<<g<<endl;
return 0;
}
// floating point exception appears when b = 0 just because it really is an error when i divide by zero




