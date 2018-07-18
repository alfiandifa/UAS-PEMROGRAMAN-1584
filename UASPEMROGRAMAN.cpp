#include <iostream>
using namespace std;
#define pi 3.14

class BangunRuangDatar

{
public :
      double luas, volume, s, a, r, t;
      void kubus ()
      {
      	cout<<" ==================================== "<<endl;
        cout<<"   Menghitung Luas dan Volume Kubus "<<endl;
        cout<<" ==================================== "<<endl;
        cout<<" Masukkan Sisi Kubus = ";cin>>s;
        luas = 6 * s * s;
        volume = s * s * s;
        cout<<" Luas Kubus          = "<<luas<<endl;
        cout<<" Volume Kubus        = "<<volume<<endl;
        cout<<" ==================================== "<<endl;
        cout<<endl;
      }

      void segitiga ()
      {
      	cout<<" ============================ "<<endl;
        cout<<"   Menghitung Luas Segitiga "<<endl;
        cout<<" ============================ "<<endl;
        cout<<" Masukkan Alas        = ";cin>>a;
        cout<<" Masukkan Tinggi      = ";cin>>t;
        luas = 0.5 * a * t;
        cout<<" Luas Segitiga        = "<<luas<<endl;
        cout<<" ============================ "<<endl;
        cout<<endl;
      }

      void lingkaran ()
      {
      	cout<<" ============================= "<<endl;
        cout<<"   Menghitung Luas Lingkaran "<<endl;
        cout<<" ============================= "<<endl;
        cout<<" Masukkan Jari-jari  = ";cin>>r;
        luas = pi * r * r;
        cout<<" Luas Lingkarann     = "<<luas<<endl;
        cout<<" ============================= "<<endl;
        cout<<endl;
      }
};
int main()
{
      int pilihan;
      atas :
      BangunRuangDatar x;
      cout<<" ================================================= "<<endl;
      cout<<"   PROGRAM MENGHITUNG RUMUS BANGUN RUANG & DATAR "<<endl;
      cout<<" ================================================= "<<endl;
      cout<<"\n MENU RUMUS BANGUN RUANG "<<endl;
      cout<<" 1. Luas dan Volume Kubus "<<endl;
      cout<<" 2. Luas Segitiga "<<endl;
      cout<<" 3. Luas Lingkaran "<<endl;
      cout<<" 0. Exit "<<endl;
      cout<<" ========================================= "<<endl;
      cout<<endl;
      cout<<" Pilih Nomor Rumus Bangun Ruang = ";cin>>pilihan;
      cout<<endl;
           
      switch (pilihan)
      {
      case 1 : x.kubus ();
            goto atas;
            break;
      case 2 : x.segitiga ();
            goto atas;
            break;
      case 3 : x.lingkaran ();
            goto atas;
            break;
      case 0 : exit:
            cout<<" Thank You for Using this Program "<<endl;
            break;
      default: cout <<" Pilihan Anda Tidak Ada "<<endl;
            goto atas;
     
      }
      system ("pause");
      return 0;
}
