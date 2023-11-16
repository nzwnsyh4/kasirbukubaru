#include <iostream>

using namespace std;

int main()
{ 

 int cb, hb, pbo, bd, dg, hargacb, hargahb, hargapbo, hargabd, hargadg;
 double harga, total, diskon, buku, fixbuku;
 
 // List harga
	 cout<<"\n\t\t=== Daftar barang beserta harganya ==="<<endl;
	 cout<<"\t\t| C Programming Book : Rp 70.000,00  |"<<endl;
	 cout<<"\t\t| C Handbook         : Rp 80.000,00  |"<<endl;
	 cout<<"\t\t| PBO                : Rp 100.000,00 |"<<endl;
	 cout<<"\t\t| Basis Data         : Rp 110.000,00 |"<<endl;
	 cout<<"\t\t| Desain Grafis      : Rp 90.000,00  |"<<endl;
	 cout<<"\t\t======================================\n"<<endl;
 
 // inputan pemesanan
	 cout<<"Masukkan jumlah C Programming Book yang dibeli : "; cin>>cb;
	 cout<<"Masukkan jumlah C Handbook yang dibeli         : "; cin>>hb;
	 cout<<"Masukkan jumlah PBO yang dibeli                : "; cin>>pbo;
	 cout<<"Masukkan jumlah Basis Data Marker yang dibeli  : "; cin>>bd;
	 cout<<"Masukkan jumlah Desain Grafis yang dibeli      : "; cin>>dg;
	 cout<<"\n"<<endl;
	 
	 hargacb = cb*70000;
	 hargahb = hb*80000;
	 hargapbo = pbo*100000;
	 hargabd = bd*110000;
	 hargadg = dg*90000;
	 
 // menampilkan bills
	 cout<<"\t========================== Customer's BILL =========================="<<endl;
	 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
	 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
	 cout<<"\t|   "<<cb<<"\t\tC Programming Book \t70000 \t\t"<<hargacb<<"\t    |"<<endl;
	 cout<<"\t|   "<<hb<<"\t\tC Handbook \t\t80000 \t\t"<<hargahb<<"\t    |"<<endl;
	 cout<<"\t|   "<<pbo<<"\t\tPBO      \t\t100000 \t\t"<<hargapbo<<"\t    |"<<endl;
	 cout<<"\t|   "<<bd<<"\t\tBasis Data Marker \t110000 \t\t"<<hargabd<<"\t    |"<<endl;
	 cout<<"\t|   "<<dg<<"\t\tDesain Grafis \t\t90000 \t\t"<<hargadg<<"\t    |"<<endl;
	 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 
 			buku = hargacb + hargahb + hargapbo + hargabd + hargadg;
			 diskon = 0.10*buku;
			 fixbuku = buku - diskon;
			  
	 cout<<"\t|\t\t\tHarga Total  \t  : "<<buku<<"\t            |"<<endl;
	 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<diskon<<"   \t    |"<<endl;
	 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<buku-diskon<<"\t    |"<<endl;
	 cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
	 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<fixbuku<<"\t    |"<<endl;
	 cout<<"\t====================================================================="<<endl;
}

