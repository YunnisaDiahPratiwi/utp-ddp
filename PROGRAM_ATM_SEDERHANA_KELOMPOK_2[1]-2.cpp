#include <iostream>
//#include <stdlib.h>
//#include <iomanip>

using namespace std;



void kata1(){
	cout<<"\t\t\t~~~SELAMAT DATANG DI ATM SEDERHANA KELOMPOK 2~~~\n";
}
void kata2(){
	cout<<"\t\t\t   ========================================\n";
}	


	
	
struct nasabah{
	char  nama[50];
	char alamat[100];
	long int nomor_rekening;
	int saldo;
	
};  
int main(){
	kata1();
	kata2();
	system ("pause");
	system("cls");
	int n=0;
	nasabah nas[50];
	int i,pil,x,pos;
	long int nomor_rekening;
	double setor,tarik;
	bool ketemu=false;
	
	menu:	
	system("cls");
			
				cout <<" ________________________________________________ "<<endl;
				cout <<"|                    BANK KRUT                   |"<<endl;
				cout <<"|________________________________________________|"<<endl;
				cout <<"|_________________ Menu Transaksi _______________|"<<endl;
				cout <<"|      1. Pendaftaran Nasabah                    |"<<endl;
				cout <<"|      2. Menabung                               |"<<endl;
				cout <<"|      3. Penarikan                              |"<<endl;
				cout <<"|      4. Keluar                                 |"<<endl;
				cout <<"|________________________________________________|"<<endl;
				cout <<"Pilihan Anda: "; cin >> pil;
		
				if (pil==1)
				{
					lagi:
						cout<<endl;
				cout<<"==================================================="<<endl;
				cout<<"Masukkan Nomor Rekening: "; cin >> nomor_rekening;
				for(i=0; i<n; i++){
					if(nomor_rekening==nas[i].nomor_rekening)
					ketemu=true;
					else
					ketemu=false;
				}
				if (ketemu)
				{cout<<" Nomor Rekening Tersebut Sudah Terdaftar, Silahkan Masukkan Nomor Yang Baru"<<endl;
				goto lagi;
				}
				else{
				cout<<"==================================================="<<endl;

				cout<<"Masukkan Nama Panggilan Anda		: "; cin >> nas[n].nama;
				cout<<"Masukan Alamat Anda			: "; cin >> nas[n].alamat;
				cout<<"Masukkan Saldo Awal			: "<<"Rp- "; cin >> nas[n].saldo;
			}
				n=n+1;
				nas[i].nomor_rekening=nomor_rekening;
				cout<<"==================================================="<<endl;
				
				cout<<"Masukkan sembarang angka untuk kembali ke menu utama"; cin >> x;
				goto menu;
			}
				
				else if(pil==2){
					cout<<endl;
					
				cout<<"===================================================="<<endl;
				cout<<"Masukkan Nomor Rekening: "; cin >> nomor_rekening;	
				for(i=0; i<n; i++)
				{
			
								if(nomor_rekening==(nas[i].nomor_rekening))
								{
								
								
															pos=i;
															ketemu=true;
															break;
														
							}
								
							
								else ketemu=false;
							
			}
				
				if (ketemu)
				{cout<<"===================================================="<<endl;
				cout<<"Masukkan Nominal Setoran: "<<"Rp- "; cin>>setor;
				nas[pos].saldo=nas[pos].saldo+setor;
				cout<<"Setoran Berhasil"<<endl;
				cout<<"Jumlah Saldo Anda       :     Rp- "<<nas[pos].saldo<<endl;
				cout<<"Terima Kasih"<<endl;
				cout<<"Apakah Anda Ingin Transaksi Lainnya,Ketik Sembarang Angka Untuk Melanjutkan"; cin>>x;
				goto menu;
				}
				
				else{
				cout<<"Maaf Nomor Rekening Anda Belum Terdaftar,Silahkan Daftar Terlebih Dahulu"<<endl;
				cout<<"Masukkan Sembarang Angka Untuk Kembali Ke Menu Utama: "; cin >> x;
				goto menu;		
		}
	}
				else if(pil==3)
				{
					cout<<endl;
					
				cout<<"======================================================"<<endl; 
				cout<<"Masukkan Nomor Rekening : "; cin>>nomor_rekening;
				for(i=0; i<n; i++)
				{
				if(nomor_rekening==(nas[i].nomor_rekening))
				{					
									pos=i;
									ketemu=true;
									break;
									
				}
				else ketemu=false;
				}
				if(ketemu)
				{
				cout<<"======================================================="<<endl;
				cout<<"Masukkan Jumlah Penarikan : Rp-"; cin>>tarik;	
				if (tarik<(nas[pos].saldo))
				{
					nas[pos].saldo=nas[pos].saldo-tarik;
					cout<<"Penarikan Berhasil"<<endl;
					cout<<"Sisa Saldo Anda       : Rp-"<<nas[pos].saldo<<endl;
					cout<<"Terima Kasih"<<endl;
				cout<<"Apakah Anda Ingin Transaksi Lainnya,Ketik Sembarang Angka Untuk Melanjutkan"; cin>>x;
				goto menu;
				}
				else cout<<"Maaf Saldo Anda Tidak Mencukupi"<<endl;
				cout<<"Masukkan Sembarang Angka Untuk Kembali Ke Menu Utama : "; cin>>x;
				goto menu;
				}
				else
				cout<<"Maaf Rekening Anda Belum Terdaftar,Silahkan Daftar Terlebih Dahulu";
				
				}
				else{cout<<endl<<"Terima Kasih Telah Berkunjung,Jangan Begitu Lain Kali Ya";
				}
			
				
				
		
						
		
return 0;
}

