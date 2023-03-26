/*
Nama     = Ryo Ekka Saputra
NIM      = A11.2022.14447
Kelompok = A11.4212
*/

#include <iostream>

using namespace std;

int tambah(int a, int b);

int kurang(int a, int b);

void hitung_total_dan_rata(int arr[], int &total, float &rata);

int main()
{
    cout << "1.";
    cout << "Hasilnya adalah : "<< tambah(5,6) << endl;

    cout << "2.";
    cout << "Hasilnya adalah : "<< kurang(7,4) << endl;

    int arr[]={9,27,43,99,69};
    int total;
    float rata;
    hitung_total_dan_rata(arr, total, rata);
    cout << "3.";
    cout << "Total nilai array :" << total << endl;
    cout << "4.";
    cout << "Rata-rata nilai array :" << rata << endl;

    return 0;
}

int tambah (int a, int b){
    return a+b;
}

int kurang(int a, int b){
    return a-b;
}

void hitung_total_dan_rata(int arr[], int &total, float &rata){
    total=0;
    for (int z=0; z<5; z++){
        total += arr[z];
    }
    rata = (float) total/5;
}
