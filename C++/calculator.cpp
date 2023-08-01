#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter the first number : ";
cin>>a;
cout<<"\nEnter second number: ";
cin>>b;
cout<<"\nSelect the operation\n1 +\n2 -\n3 *\n4 /\n5 %\n";
cin>>c;
if (c == 1){
cout<<"The result of "<<a<<" + "<<b<<" is "<<a+b;
}
else if (c == 2){
cout<<"The result of "<<a<<" - "<<b<<" is "<<a-b;
}
else if(c == 3) {
cout<<"The result of "<<a<<" * "<<b<<" is "<<a*b;
}
else if(c == 4){
cout<<"The result of "<<a<<" / "<<b<<" is "<<a/b;
}
else if(c == 5){
cout<<"The result of "<<a<<" % "<<b<<" is "<<a%b;
}
else{
cout<<"Invalid Operation";
}
return 0;
}
