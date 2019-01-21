// lab1revision1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include<fstream>
using namespace std;

int power=0;
int fileinput();
int main()
{
	int a=0;
	int b=0;
	

	cout<<"Enter the base:"<<endl;
	cin>>a;
	cout<<"Enter the power:"<<endl;
	cin>>b;
	power=pow(a,b);
	cout<<power<<endl;
	fileinput();
	return 0;
}
int fileinput()
{

	int l=0;
	int c=0; 
	int d=0;
	ifstream read;
	read.open("file.txt");
	while(!read.eof())
	{
	 read>>l;
	 read>>c;
	 read>>d;
	power=pow(c,d);
	cout<<power;
	}

	return 0;
}

