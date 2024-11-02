#include <iostream>
using namespace std;

int main() {
    char TipeRumah, JenisPembayaran;
    char NamaPembeli[60];
    long long HargaRumah, AngsuranPerBulan;
    long long TotalHargaRumah = 0;

    cout << "Nama Pembeli : ";
    cin >> NamaPembeli;
    cout << "Tipe Rumah (A-D): ";
    cin >> TipeRumah;
    cout << "Jenis Pembayaran (K/T): ";
    cin >> JenisPembayaran;

    switch (TipeRumah) {
        case 'a':
        case 'A':
            if (JenisPembayaran == 'K' || JenisPembayaran == 'k') {
                HargaRumah = 50000000;
                AngsuranPerBulan = 500000;
                TotalHargaRumah = HargaRumah * 12 * 10;
            } else {
                HargaRumah = 50000000;
            }
            break;
        case 'b':
        case 'B':
            if (JenisPembayaran == 'K' || JenisPembayaran == 'k') {
                HargaRumah = 75000000;
                AngsuranPerBulan = 750000;
                TotalHargaRumah = HargaRumah * 12 * 10;
            } else {
                HargaRumah = 75000000;
            }
            break;
        case 'c':
        case 'C':
            if (JenisPembayaran == 'K' || JenisPembayaran == 'k') {
                HargaRumah = 85000000;
                AngsuranPerBulan = 1000000;
                TotalHargaRumah = HargaRumah * 12 * 10;
            } else {
                HargaRumah = 85000000;
            }
            break;
        case 'd':
        case 'D':
            if (JenisPembayaran == 'K' || JenisPembayaran == 'k') {
                HargaRumah = 1000000;
                AngsuranPerBulan = 1000000;
                TotalHargaRumah = HargaRumah * 12 * 10;
            } else {
                HargaRumah = 1000000;
            }
            break;
        default:
            cout << "Gagal, Ulangi Lagi!" << endl;
    }

    if (JenisPembayaran == 'K' || JenisPembayaran == 'k') {
        cout << "Angsuran Perbulan: (Rp)." << AngsuranPerBulan << endl;
        cout << "Total Harga Rumah: (Rp)." << TotalHargaRumah << endl;
    } else if (JenisPembayaran == 'T' || JenisPembayaran == 't') {
        cout << "Harga Rumah: (Rp)." << HargaRumah << endl;
    } else {
        cout << "Salah, Ulangi Lagi!" << endl;
    }

    return 0;
}