#include <iostream>
using namespace std;


float diskonKhusus_07417(float totalBelanja_07417)
{
	float diskon_07417= 0;
	if (totalBelanja_07417>200000)
	{
		diskon_07417= 0.10;
	}
	else if(totalBelanja_07417>150000)
	{
		diskon_07417= 0.50;
	}
	return diskon_07417;
}
float cal_diskonMember_07417(float totalBelanja_07417,bool member_07417)
{
	float diskon_07417= 0;
	if (totalBelanja_07417>150000)
	{
		if (member_07417== true)
		{
			diskon_07417= 0.5;	
		}
	}
	return diskon_07417;
}
void diskon_07417(float totalBelanja_07417, bool member_07417)
{
	float diskon_07417= diskonKhusus_07417(totalBelanja_07417);
	cout<<"diskon ="<<diskon_07417<<endl;
	float totalBayar_07417= totalBelanja_07417- (totalBelanja_07417*diskon_07417);
	cout<<"total Bayar :"<<totalBayar_07417<<endl;
	float diskonMember_07417= cal_diskonMember_07417(totalBelanja_07417,member_07417);
	cout<<"diskon member "<<diskonMember_07417<<endl;
	cout<<"Yang harus dibayar :"<<totalBayar_07417- (totalBayar_07417*diskonMember_07417);
}
main()
{
	float totalBelanja_07417;
	bool member_07417;
	int pilih;
	
	cout<<"selamat datang di toko iksan\n";
	cout<<"masukkan total belanja ";
	cin>>totalBelanja_07417;
	cout<<"menu member \n";
	cout<<"1. member"<<endl;
	cout<<"2. non-member"<<endl;
	cout<<"masukan pilih:";
	cin>>pilih;
	switch(pilih)
	{
		case 1:
			member_07417= true;
			break;
		case 2:
			member_07417= false;
			break;
	}
	
	diskon_07417(totalBelanja_07417,member_07417);
}
