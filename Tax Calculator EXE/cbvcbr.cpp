#include<iostream>
using namespace std;
int cbv(int x)
{
	x=x*2;
	cout<<"In Function Value : "<<x<<endl;
}
/*void cbr(int *y)
{
	*y=*y*2;
}*/
main()
{
	int callbyvalue,callbyreference;
	cout<<"Enter Number : ";cin>>callbyvalue;
	//callbyreference=callbyvalue;
	cout<<"Before :\n Call by Value : "<<callbyvalue<<endl;
	//cout<<"Call by Reference : "<<callbyreference<<endl;
	cbv(callbyvalue);
//	cbr(&callbyreference);
	cout<<"After : \n Call by Value : "<<callbyvalue<<endl;
	//cout<<"Call by Reference : "<<callbyreference<<endl;		
}
