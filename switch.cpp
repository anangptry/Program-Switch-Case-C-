#include <iostream>
using namespace std;
int main()
{
	cout<<"SWITCH "<<endl;
	cout<<endl;
	
    int pilih, a, b, c;
    cout<<"Masukan Pilihan"<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. pembagian"<<endl;
    cout<<"Masukan Pilihan = ";
    cin>>pilih;
    
    switch(pilih)
    {
        case 1:
            cout<<endl;
            cout<<"Masukan Bilangan A = ";
            cin>>a;
            cout<<"Masukan Bilangan B = ";
            cin>>b;
            cout<<endl;
            c=a+b;
            cout<<"Hasil = "<<c;
            cout<<endl;
            break;
        case 2:
            cout<<endl;
            cout<<"Masukan Bilangan A = ";
            cin>>a;
            cout<<"Masukan Bilangan B = ";
            cin>>b;
            cout<<endl;
            c=a-b;
            cout<<"Hasil = "<<c;
            cout<<endl;
            break;
        case 3:
            cout<<endl;
            cout<<"Masukan Bilangan A = ";
            cin>>a;
            cout<<"Masukan Bilangan B = ";
            cin>>b;
            cout<<endl;
            c=a*b;
            cout<<"Hasil = "<<c;
            cout<<endl;
            break;
            
        case 4:
		    cout<<endl;
			cout<<"masukan Bilangan A = ";
			cin>>a; 
			cout<<"Masukan Bilanagn B = ";
			cin>>b;
			cout<<endl;
			c=a/b;
			cout<<"hasil = "<<c;
			cout<<endl;
			break;
        default:
            cout<<"pilihan tidak tersedia"<<endl;
            cout<<"TERIMA KASIH"<<endl;
    }
}


