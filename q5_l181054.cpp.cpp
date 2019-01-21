// lab1q3.1.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;

int input(int a[],int n);

int main()
{
	cout<<"This will create a dynamic array"<<endl;
	int* a = NULL;   
    int n;  
	cout<<"Enter the size of your array"<<endl;
    cin >> n;       
	a = new int[n];  
    for (int i=0; i<n; i++) 
   {
    a[i] = 0;    
   }
	
	input(a,n);
	
	
	cout<<"Entered elements are: ";
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<endl;
	int temp =0;
	for (int i = 0; i < n-1; i++)
{

    for (int j = 0; j < n - 1; j++)
    {
        if (*(a + j) > *(a + j + 1))
        {
			temp = *(a+j);
            *(a + j) = *(a + j + 1);
            *(a + j + 1) = temp;

        }
    }
}
	cout<<"Entered elements are: ";
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<endl;
	return 0;
}
int input(int a[],int n)
{
	cout<<"Input "<<n<<" elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Input element "<<i+1<<": ";
		cin>>*(a+i);
	}
	return 0;
	
}



