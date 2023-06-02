#include <iostream>

using namespace std; //agar tidak menuliskan perintah std berulang-ulang
class MyClass {         // The class
  public:               // Akses specifier
    void myMethod();    // Deklarasi Method/function
};

// Definisi Method/function di luar kelas
void MyClass::myMethod() {
  cout << "------Deler Maju Makmur!------";
}
 // Panggil method
int main(){ 
 MyClass myObj;     // Buat sebuah objek MyClass
 myObj.myMethod();
 
// inisialisasi variable terlebih dahulu.
 int pilihan,totalPaket,banyak,hasil=0;
 char pilihanPaket,yesNo;
 int diskon = 10;
 int x=0;
 int totalSeluruhPesanan[x];
 cout<<""<<endl;
 cout<<"List Brand Mobil : "<<endl;
 cout<<"1. Honda"<<endl;
 cout<<"2. Diihatsu"<<endl;
 cout<<"3. Toyota"<<endl;
 //Pengguna memasukan list
 
 do{
  cout<<"Masukan Brand Yang Di Pilih : ";
  cin>>pilihan;
  
  switch(pilihan){
   case 1:
    cout<<"List Honda"<<endl;
    cout<<"A. Honda Civic : Rp.130.000.000,00"<<endl;
    cout<<"B. Honda Jazz  : Rp.150.000.000,00"<<endl;
    cout<<"C. Honda Brio  : Rp.200.000.000,00"<<endl;
    
    cout<<"Masukan Brand Yang Di Pilih : ";
    cin>>pilihanPaket;
    
    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
     totalPaket=130000000;
    } else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
     totalPaket=150000000;
    } else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
     totalPaket=200000000;
    } else {
     cout<<"Tidak Tersedia"<<endl;
    }
    
    cout<<"Berapa Banyak Mobil Yang Dibeli? ";//Pengguna memasukan jumlah beli
    cin>>banyak;
    
    totalSeluruhPesanan[x]=totalPaket*banyak;
    
    cout<<"Apakah Ada Pembelian Mobil Lain (Y/N)?";
    cin>>yesNo;
   
   break; 
    
   case 2:
    cout<<"List Daihatsu "<<endl;
    cout<<"A. Daihatsu Type 1  : Rp.150.000.000,00"<<endl;
    cout<<"B. Daihatsu Type 2  : Rp.130.000.000,00"<<endl;
    cout<<"C. Daihatsu Type 3  : Rp.170.000.000,00"<<endl;
    
    cout<<"Masukan Brand Yang Di Pilih : ";
    cin>>pilihanPaket;;
    
    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
     totalPaket=150000000;
    } else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
     totalPaket=130000000;
    } else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
     totalPaket=170000000;
    } else {
     cout<<"Tidak Tersedia"<<endl;
    }
    
    cout<<"Berapa Banyak Mobil Yang Dibeli? ";//Pengguna memasukan jumlah beli
    cin>>banyak;
    
    totalSeluruhPesanan[x]=totalPaket*banyak;
    
    cout<<"Apakah Ada Pembelian Lainnya (Y/N)?";
    cin>>yesNo;
   break;
   
   case 3:
    cout<<"List Honda Toyota"<<endl;
    cout<<"A. Toyota 2019  : Rp.170.000.000,00"<<endl;
    cout<<"B. Toyota 2020  : Rp.180.000.000,00"<<endl;
    cout<<"C. Toyota 2021  : Rp.150.000.000,00"<<endl;
    
    cout<<"Masukkan Brand Yang Di Pilih : ";
    cin>>pilihanPaket;;
    
    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
     totalPaket=170000000;
    } else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
     totalPaket=180000000;
    } else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
     totalPaket=150000000;
    } else {
     cout<<"Tidak Tersedia"<<endl;
    }
    
    cout<<"Berapa Banyak Mobil Yang Dibeli? ";//Pengguna memasukan jumlah beli
    cin>>banyak;
    
    totalSeluruhPesanan[x]=totalPaket*banyak;
    
    cout<<"pakah Ada Plihan Mobil Lain  (Y/N)?";
    cin>>yesNo;
   
   break;
   
   //Arrays and Pointers  
  }
  x++;
 } while(yesNo == 'Y' || yesNo == 'y');
 
 cout<<"Pembayaran : "<<endl;
 //list and vektor
 //Menampilkan semua nilai array
  for(int i=0;i<x;i++){
  hasil=hasil+totalSeluruhPesanan[i];
 }
 
 cout<<"Total Pembelian : "<<hasil<<endl;//Menampilkan jumlah bayar (belum termasuk diskon)
 //ini mau dipakai atau engga bebas kalau mau ada diskon dipakai juga bisa
 //Kondisi untuk menentukan diskon yang didapatkan berdasarkan total
 cout<<"Diskon 10% : "<<hasil/diskon<<endl;
 cout<<"Total Bayar : "<<hasil - (hasil/diskon)<<endl;
}
