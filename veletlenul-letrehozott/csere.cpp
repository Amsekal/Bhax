#include <iostream>
using namespace std;
int main()
{int a,b;
cout<<"a= ";
cin>>a;
cout<<endl<<"b= ";
cin>>b;
cout<<endl<<"Csere folyamatban"<<endl;
a=a*b;
b=a/b;
a=a/b;
cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
return 0;
}
