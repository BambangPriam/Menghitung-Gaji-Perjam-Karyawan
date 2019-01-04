#include <iostream>
#define gajiperjam 5000 // menggunakan konstanta
using namespace std;



int main()
{   double jam,totalgaji;
    cout << "MENGHITUNG GAJI KARYAWAN" << endl;
    cout << "Masukkan lama kerja karyawan (jam) :";
    cin >> jam;
    totalgaji = gajiperjam*jam;

    cout << "Jumlah gaji yang didapatkan karyawan : " << totalgaji << endl;
    return 0;
}
