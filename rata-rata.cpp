#include <iostream>
using namespace std;

main()
{
	int a,b,c,d,rata,total,hasil;
	cout<<"masukan nilai ipa :"; cin>>a;
	cout<<"masukan nilai ips :"; cin>>b;
	cout<<"masukan nilai mtk :"; cin>>c;
	cout<<""<<endl;
	
	d=a+b+c;
	total=a+b+c;
	hasil=d/3;
	
	cout<<"nilai rata-rata ="<<hasil<<endl;
	cout<<"total nilai ="<<total<<endl;
	
	if(hasil>60)
	{
		cout<<"LULUS";
	}
	else
	if(hasil>40)
	{
		cout<<"TIDAK LULUS";
	}
}

