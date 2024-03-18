# BAB FUNGSI
buatlah fungsi nextday yang menerima masukan nama hari sekarang (senin sampai ahad) dan mengmbalikan nama hari esoknya

## Penyelesaian
```c++
#include <iostream>
#include <string>

// Fungsi ini menerima string `hari_sekarang` sebagai input, yang harus menjadi nama hari dalam seminggu.
// Fungsi ini mengembalikan nama hari besok.
std::string haribesok(const std::string& hari_sekarang) {
    // Sebuah konstanta untuk jumlah hari dalam seminggu.
    const int hari_dalam_minggu = 7;

    // Dua array untuk menyimpan nama-nama semua hari dalam seminggu dan hari besok.
    const std::string hari[hari_dalam_minggu] = {
        "senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"
    };
    const std::string hari_besok[hari_dalam_minggu] = {
        "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu", "senin"
    };

    // Melakukan perulangan melalui semua hari dalam seminggu.
    for (int i = 0; i < hari_dalam_minggu; ++i) {
        // Jika `hari_sekarang` cocok dengan hari saat ini, kembalikan nama hari besok.
        if (hari_sekarang == hari[i]) {
            return hari_besok[i];
        }
    }

    // Jika `hari_sekarang` tidak cocok dengan hari apa pun, cetak pesan error dan kembalikan string kosong.
    std::cout << "Hari yang salah: " << hari_sekarang << std::endl;
    return "";
}

// Fungsi utama meminta pengguna untuk memasukkan nama hari dalam seminggu, membaca input ke dalam variabel `hari_sekarang`,
// dan kemudian memanggil fungsi `haribesok` dengan argumen `hari_sekarang`. Jika fungsi `haribesok` mengembalikan string yang tidak kosong,
// fungsi utama mencetak nama hari besok. Jika fungsi `haribesok` mengembalikan string kosong, fungsi utama tidak akan melakukan apa-apa.
int main() {
    std::string hari_sekarang;
    std::cout << "Masukan nama hari dalam seminggu (senin-minggu): ";
    std::cin >> hari_sekarang;
    std::string hari_besok = haribesok(hari_sekarang);
    if (!hari_besok.empty()) {
        std::cout << "Hari selanjutnya adalah: " << hari_besok << std::endl;
    }
    return 0;
}
```
# Capture Hasil Running Program

<img width="430" alt="Screenshot 2024-03-18 222324" src="https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/1e9751c8-9e8c-4499-8957-bceb0e786ec5">
