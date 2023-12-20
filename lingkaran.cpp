#include <iostream>

using namespace std;

int main(){
	
	float luas,keliling,diameter,phi,jariJari;
	int pilih;
	char ulang;
	
	//declare array
	float hasil[3];
	
	
	//do-while loop
	do{
		cout<<"\n===== Apa yang Ingin Anda Hitung =====\n";
		cout<<"1. Hitung Lingkaran\n";
		cout<<"2. History\n";
		cout<<"3. Exit\n";
		cout<<"====================================\n";
		cout<<"Masukkan pilihan anda :";
		cin>>pilih;
		
		switch(pilih){
			
			case 1: 
			{
				do{
				cout<<"Masukkan jari-jari lingkaran :";
				cin>>jariJari;
				luas= 3.14*jariJari*jariJari;
				keliling= 2* 3.14 * jariJari;
				diameter= 2* jariJari;
				cout<<"Luas Lingkaran adalah : "<<luas<<endl;
				cout<<"Keliling Lingkaran adalah :"<<keliling<<endl;
				cout<<"Diameter Lingkaran adalah : "<<diameter<<endl;
			
				cout << "Apakah Ingin Mengulang (y/t)? ";
            	cin >> ulang; 
			
				}
				while (ulang == 'y' || ulang == 'Y');
			}
		
			break;
			
			
			case 2:
			{
				hasil[0]= luas;
				hasil[1]= keliling;
				hasil[2]= diameter;
				
				cout<<"===== HISTORY ===== \n";
				cout<< "Luas : "<<hasil[0]<<endl;
				cout<< "Keliling : "<<hasil[1]<<endl;
				cout<< "Diameter : "<<hasil[2]<<endl;
			
			
			}
			break;
			

			
			case 3:
			{
				cout<<"Anda keluar dari program";
			}
			break;
		}
	 
	}while (pilih != 3);
	
	return 0;
		
	
}
