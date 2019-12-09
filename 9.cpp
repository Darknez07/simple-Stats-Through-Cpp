#include<iostream>
using namespace std;
#include<math.h>
double Mean(double *x,int size)
{
	int i=0;
	double sum=0;
	for(;i<size;i++)
	{
		sum+=*(x+i);
	}
	return sum/size;
}
double var(double mean,double *x,int size)
{
	int i=0;
	double v=0;
	for(;i<size;i++)
	{
		v=v+((mean-*(x+i))*(mean-*(x+i)));
	}
	return v/size;	
}
double st(double va)
{
	return sqrt(va);
}
int main()
{
	int p,i=0;
	cout<<"Enter  the size of data: ";
	cin>>p;
	double a[p];
	for(;i<p;i++)
	{
		cout<<"Enter the data: ";
		cin>>a[i];
	}
	double n=Mean(a,p);
	double k=var(n,a,p);
	double w=st(k);
	cout<<"Mean of data is: "<<n<<endl;
	cout<<"Variance of data is: "<<k<<endl;
	cout<<"Standard deviation of data is: "<<w<<endl;
}
