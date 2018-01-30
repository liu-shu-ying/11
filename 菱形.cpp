#include<iostream.h>
void main()
{
	int line,i,j;
	cout<<"请输入行数line"<<endl;
	cin>>line;
	char ch;
	cout<<"什么形式"<<endl;
	cin>>ch;
	for(i=1;i<=line;i++)
	{
		for(j=1;j<=line+1-i;j++)
			cout<<"  ";
		{
		for(j=1;j<=i;j++)
			if(i==line)
				cout<<ch<<"   ";
			else 
				cout<<ch<<"   ";
		}
		cout<<endl;
	}
	for(i=line-1;i>=1;i--)
	{
		for(j=line;j>=i;j--)
			cout<<"  ";
		{
		for(j=1;j<=i;j++)
			if(i==1)
				cout<<ch<<"   ";
			else
				cout<<ch<<"   ";
		}
			cout<<endl;
	}
}