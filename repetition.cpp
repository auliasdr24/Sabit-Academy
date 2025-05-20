#include <iostream>
using namespace std;

int main() {
    char jenis;
    int detik;

    while (true) {
        cout << "Masukkan jenis kendaraan (m = motor, b = mobil, x = keluar): ";
        cin >> jenis;

        if (jenis == 'x') {
            cout << "Program dihentikan." << endl;
            break;
        }

        cout << "Masukkan waktu parkir dalam detik: ";
        cin >> detik;

        int jam = detik / 3600;
        int sisa = detik % 3600;
        int menit = sisa / 60;
        int detik_sisa = sisa % 60;

        int biaya = 1000;

        if (detik > 3600) {
            int jamTambahan = (detik - 3600 + 3599) / 3600;

            if (jenis == 'm') {
                biaya = biaya + jamTambahan * 2000;
            } else if (jenis == 'b') {
                biaya = biaya + jamTambahan * 3000;
            }
        }

        if (jenis == 'm') {
            cout << "Jenis Kendaraan: Motor" << endl;
        } else if (jenis == 'b') {
            cout << "Jenis Kendaraan: Mobil" << endl;
        }

        cout << "Waktu Parkir: " << jam << " jam " << menit << " menit " << detik_sisa << " detik" << endl;
        cout << "Total Biaya Parkir: Rp " << biaya << endl;
    }

    return 0;
}
