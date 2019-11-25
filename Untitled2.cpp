#include<iostream>
using namespace std;
void cal();
int main()
{
cal();}
void cal()
{
int sum,sub,mulp,div;
int x,y;
char ch;
cout<<"Enter two values"<<endl;
cin>>x>>y;
cout<<"Enter the operator "<<endl;
cin>>ch;


switch(ch)
{
	case '+':
		{
			
			sum=x+y;
			cout<<sum;
			break;
		}
			case '-':
		{
			sub=x-y;
			cout<<sub;
			break;
		}
			case '*':
		{
			mulp=x*y;
			cout<<mulp;
			break;
		}
			case '/':
		{
			div=x/y;
			cout<<div;
			break;
		}
}
}


