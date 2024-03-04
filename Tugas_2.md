# Masalah 1

Tulislah runtunan algoritma untuk memperoleh informasi nomor telepon berdasarkan data alamat (nama jalan dan nomornya) kepada perusahaan lokal (108) PT Telkom. Algoritma harus menjelaskan proses bila (a) nomor 108 sibuk, (b) alamat yang diberikan penelpon belum mempunyai sambungan telepon.

## Penyelesaian :
```c++
Deklarasi
string alamat, nomor;
int nomor_telepon;
Deskripsi
koneksi_ke_database (pt-telkom);
write ("masukan alamat: ");
read (alamat);
write ("masukan nomor: ");
read (nomor);
query (alamat, nomor);
if (data_alamat_terdaftar) 
    nomor_telepon = nomor; //jika terdaftar maka nomor telepon akan di teruskan ke user
else if (data_alamat_salah) //jika data yang dimasukan user salah
    nomor_telepon = 108;
else if (data_alamat_tidak_mempunyai_sambungan) //jika data yang dimasukan user tidak mempunyai sambungan atau nomor telepon sibuk
    nomor_telepon = 108;
write ("Nomor Telepon Sibuk")
read (nomor_telepon)
write ("Nomor telepon anda : nomor_telepon")
End Function
```
## Penjelasan:

Algoritma di atas dimulai dengan variable (alamat, nomor) untuk menyimpan data alamat dan nomor telepon.
Lalu dilanjutkan dengan iniliasisasi variable (nomor_telepon) untuk menyimpan nomor yang ditemukan.
Setelah itu permintaan untuk terkoneksi ke database PT Telkom, hal ini bertujuan agar dapat mencari dan menyimpan data yang dimasukan ke database.
Setelah berhasil terkoneksi user akan diminta untuk memasukan data sesuai format.
Dilanjutkan dengan melakukan perintah "query" pada database yang bertujuan untuk mendapatkan informasi di dalamnya, dan selanjutnya
akan di cocokan dengan alamat dan nomor yang dimasukan. 
Setelah pencarian informasi menggunakan perintah tersebut akan dilakukan pengecekan menggunakan "if" jika cocok maka nomor telepon akan ditampilkan dan disimpan ke
variable (nomor_telepon), dan jika Alamat yang dimasukan salah maka user akan ditampilkan nomor "108" yang merupakan nomor sibuk atau layanan pelanggan PT Telkom,
dan jika Alamat tidak mempunyai sambungan atau nomor 108 sedang sibuk maka user akan ditampilkan nomor yang sama yaitu "108" dan akan muncul pesan nomor sedang sibuk.
Algoritma selesai dan nomor akan ditampilkan ke monitor.

# Masalah 2

Algoritma di bawah ini membagi sekantung permen secara adil kepada 3 orang anak dengan cara memberikan satu permen kepada tiap anak secara berulang-ulang:

```
repeat
    berikan satu permen kepada anak pertama
    berikan satu permen kepada anak keduan
    berikan satu permen kepada anak ketiga
until kantung permen kosong
```

Pada keadaan bagaimana algoritma tersebut gagal?

## Penyelesaian :
Algoritma tersebut akan gagal dan berhenti jika jumlah permen yang di bagikan ke 3 anak adalah 0. Dan jika jumlah permen yang dibagikan telah habis dibagi secara berulang-ulang ke 3 anak tersebut.

## Referensi
https://www.dewaweb.com/blog/apa-itu-query/
