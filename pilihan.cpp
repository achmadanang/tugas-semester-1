#include <iostream>
using namespace std;

main()
{
	float n,r,f,k;
	cout<<"1.ruaumur\n";
	cout<<"2.fahrenheit\n";
	cout<<"3.kelvin\n";
	cout<<"masukan pilihan";
	cin>>n;
	
	if((n>=1)&&(n<=1))
	{
		cout<<"masukan ";
		cin>>n;
		r=n*0.8;
		cout<<"ruaumur"<<r;
	}
	if((n>=2)&&(n<=2))
	{
		cout<<"masukan";
		cin>>n;
		f=(n*1.8)+32;
		cout<<"fahrenheit"<<f;
	}
	if((n>=3)&&(n<=3))
	{
		cout<<"masukan";
		cin>>n;
		k=n+273.15;
		cout<<"kelvin"<<k;
	}
	
}
