#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter 1st number : ";
	cin>>a;
	cout<<"Enter 2nd number : ";
	cin>>b;
	cout<<"Enter 3rd number : ";
	cin>>c;
	cout<<"----------------------------"<<endl;
	cout<<"1st number is : "<<a<<endl;
	cout<<"2nd number is : "<<b<<endl;
	cout<<"3rd number is : "<<c<<endl;
	if(a>b && a>c)
	cout<<"\nThe Largest number is : "<<a;
	else if(b>a && b>c)
	cout<<"\nThe Largest number is : "<<b;
	else
	cout<<"\nThe Largest number is : "<<c;
	return 0;
}