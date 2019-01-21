// lab1q1.1.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;

int swap1(int &x1,int &y1);
void swap2(int* f, int* g);
int print(int &a, int &b, int* i, int* j,int* l, int* m);
int main()
{
	int x=0;
	int y=0;
	int* p;
	int* q;
	x=10;
	y=5;
	p=&x;
	q=&y;
	print(x,y,p,q,p,q);
	//cout<<" value of x:"<< " "<<x<<endl;
	//cout<<" value of y:"<< " "<<y<<endl;
	//cout<<" value of p:"<< " "<<p<<endl;
	//cout<<" value of q:"<< " "<<q<<endl;
	//cout<<" value of *p:"<< " "<<*p<<endl;
	//cout<<" value of *q:"<< " "<<*q<<endl;
	//
	////cout<<"Before swapping "<<x<<" "<<y<<endl;
	swap1(x,y);
	print(x,y,p,q,p,q);
	//cout<<" value of x:"<< " "<<x<<endl;
	//cout<<" value of y:"<< " "<<y<<endl;
	//cout<<" value of p:"<< " "<<p<<endl;
	//cout<<" value of q:"<< " "<<q<<endl;
	//cout<<" value of *p:"<< " "<<*p<<endl;
	//cout<<" value of *q:"<< " "<<*q<<endl;
	////cout<<"After swapping "<<x<<" "<<y<<endl;
	//swap2(p, q);
	
	int* z1;
	z1 = p;
	p=q;
	q=z1;
	print(x,y,p,q,p,q);
	// cout<<" value of x:"<< " "<<x<<endl;
	//cout<<" value of y:"<< " "<<y<<endl;
	//cout<<" value of p:"<< " "<<p<<endl;
	//cout<<" value of q:"<< " "<<q<<endl;
	//cout<<" value of *p:"<< " "<<*p<<endl;
	//cout<<" value of *q:"<< " "<<*q<<endl;
	system("pause");
	return 0;
}

int swap1(int &x1,int &y1)
{
	int z=0;
	z=x1;
	x1=y1;
	y1=z;
	return 0;

}
void swap2(int *f, int *g)
{
  int* z1;
  z1 = f;
  f=g;
  g=z1;
}
int print(int &a, int &b, int* i, int* j,int* l, int* m)
{
	cout<<" value of x:"<< " "<<a<<endl;
	cout<<" value of y:"<< " "<<b<<endl;
	cout<<" value of p:"<< " "<<i<<endl;
	cout<<" value of q:"<< " "<<j<<endl;
	cout<<" value of *p:"<< " "<<*i<<endl;
	cout<<" value of *q:"<< " "<<*j<<endl;
	cout<<"************"<<endl;
	return 0;
}