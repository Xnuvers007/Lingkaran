#include <iostream>
#define phi 3.14

using namespace std;

double INDRA; //Variabel Global

//Procedure
void input(){
    cout<<"Masukan nilai jari-jari: ";
	cin>>INDRA;
    cout<<"---------------------------------------------\n";
}

//Function
double luasLingkaran(){
    double luas;    //Variable Lokal
    luas=phi*INDRA*INDRA;   //Melakukan Proses Perhitungan
    return luas;    //Mengembalikan nilai
    }

main(){
    cout<<"=============================================\n";
    cout<<"||                                         ||\n";
    cout<<"||       MENGHITUNG LUAS LINGKARAN         ||\n";
    cout<<"||                                         ||\n";
    cout<<"||         Procedure & Function            ||\n";
    cout<<"=============================================\n";
    input(); //Memanggil Procedure

    //Menampilkan hasil dan memanggil fungsi
    cout<<"Luas Lingkaran Adalah : "<<luasLingkaran();
	cout<<endl;
    cout<<"---------------------------------------------\n";
}
