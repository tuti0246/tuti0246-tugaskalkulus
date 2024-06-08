#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	cout<<"\n\t -----------------------------\n";
	cout<<"\t            KALKULATOR         \n";
	cout<<"\t -----------------------------\n";
	cout<<"1:penjumlahan"<<endl;
	cout<<"2:pengurangan"<<endl;
	cout<<"3:perkalian"<<endl;
	cout<<"4:pembagian"<<endl;
	cout<<"5:modulus"<<endl;
	cout<<"6:pangkat"<<endl;
	cout<<"7:akar"<<endl;
	cout<<"8:perhitungan persamaan linier"<<endl;
	
	cout<<"masukan pilihan:";
	cin>>pil;
	
	cout<<"masukan bilangan pertama";
	cin>>bil1;
	cout<<"masukan bilangan kedua: ";
	cin>>bil2;
	
	
	switch(pil){
		case 1 : hasil = bil1 + bil2;
		         operasi = '+';
		         break;
		case 2 : hasil = bil1 - bil2;
		         operasi = '-';
		         break;
		case 3 :hasil = bil1 * bil2;
		        operasi = '*'; 
		        break;
		case 4 :hasil = bil1 / bil2;
		        operasi = '/';
		        break;
		case 5 :hasil = bil1 % bil2;
		        operasi = '%';
		        break;
		case 6 :hasil = pow(bil1, bil2);
		        operasi = '^';
				break;
		case 7 :hasil = sqrt(bil1);
		        operasi = 'u2713';
				break;		 
			        		       
		default : cout<<"salah memasukan operator"<<endl;
		          return 1;
		      
		        
	}
	cout<<"-------------------------"<<endl;	
	cout<<" "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
if 	(pil == 7)
    cout<<" "<<operasi<<bil1<<" = "<<hasil<<endl;
 else
    cout<<" " <<bil1<<operasi<<bil2<<" = "<<hasil<<endl; 
    
    return 0;
}
	
	