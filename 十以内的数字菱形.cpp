#include <iostream.h>
void main()
{
	int line,i,j;
	cout<<"ÇëÊäÈëÐÐÊý"<<endl;
	cin>>line;
	for(i=1;i<=line;i++)
	{
		for(j=1;j<=line+1-i;j++)
			cout<<"  ";
		for(j=1;j<=i;j++)
		{
			if(i==line)
				cout<<i<<"  ";
           else
				cout<<i<<"   ";
		}
		cout<<endl;
	}
	for(i=line-1;i>=0;i--)
	{
		for(j=line;j>=i;j--)
			cout<<"  ";
		for(j=1;j<=i;j++)
		{
			if(i==1)
				cout<<i<<"  ";
			else
				cout<<i<<"    ";
		}
		cout<<endl;
	}
}