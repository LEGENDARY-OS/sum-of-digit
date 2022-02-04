#include<iostream>
using namespace std;
int main()
{
	int n=0;
	cout<<"Enter a number: ";
	cin>>n;
	int r=0;
	int sum=0;
	while(n>0){
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	cout<<endl<<"Sum of digit = "<<sum;
}
