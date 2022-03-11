#include <iostream>
using namespace std;

main()
{
	int n;
	float r,f,k;
	cout<<"1.ruaumur\n";
	cout<<"2.fahrenheit\n";
	cout<<"3.kelvin\n";
	cout<<"masukan";
	cin>>n;
	
	switch (n)
	{
		case 1:
		cout<<"masukan";
		cin>>n;
		r=n*0.8;
		cout<<"ruaumur"<<r;
		break;
		case 2:
		cout<<"masukan";
		cin>>n;
		f=(n*1.8)+32;
		cout<<"fahrenheit"<<f;
		break;
		case 3:
		cout<<"masukan ";
		cin>>n;
		k=n+273.15;
		cout<<"kelvin"<<k;
	}

}
