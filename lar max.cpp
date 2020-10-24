//largest number or maximum number
#include<iostream>
using namespace std;
int main()
{
	float arr[5]={23.4,34.5,55.5,33.5,6.5};
	int i;
	float max=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
		 max=arr[i];
		}
	}
	cout<<"max value is ="<<max<<endl;
	return 0;
}
