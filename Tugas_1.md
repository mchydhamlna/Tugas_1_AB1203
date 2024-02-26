# MASALAH 1
Buatlah pseudocode untuk menghitung jumlah digit dari sebuah bilangan yang dimasukkan pengguna. (bilangan=123).
```
function main()
    print("Masukkan bilangan: ")
    bilangan = readInt()
    jumlahDigit = 0
    digit = bilangan
    while (digit != 0)
        sisa = digit % 10
        jumlahDigit++
        digit /= 10
    print("Jumlah digit: " + jumlahDigit)
End Function
```
Penjelasan kode di atas, dimulai dengan menggunakan variabel "bilangan" untuk menyimpan bilangan yang dimasukkan pengguna. Kemudian, kode ini akan menginisialisasi variabel "jumlahDigit" dengan angka 0. Setelah itu loop (Pengulangan) While dilakukan sampai digit tidak lagi sama dengan angka 0. Dalam setiap iterasi, kode ini akan menghitung sisa bagi digit dengan 10, menambahkan 1 ke jumlahDigit, dan menghapus digit terakhir dari bilangan dengan menggunakan operator pembagian (/). Setelah selesai, maka kode selesai dan akan ditampilkan hasil jumlah digit yang telah dihitung.

# MASALAH 2
Buatlah pseudocode untuk menentukan apakah sebuah tahun yang dimasukkan pengguna adalah tahun kabisat atau tidak.
```
function main()
    print("Masukkan tahun: ")
    tahun = readInt()

    if (tahun % 4 == 0)
        if (tahun % 100 == 0)
        if (tahun % 400 == 0) 
        print("Tahun " + tahun + " adalah tahun kabisat")
        else 
        print("Tahun " + tahun + " bukan tahun kabisat")
        else
        print("Tahun " + tahun + " adalah tahun kabisat")
        else
        print("Tahun " + tahun + " bukan tahun kabisat")
End Function
```
Penjelasan kode di atas, dimulai dengan menggunakan variabel "tahun" untuk menyimpan bilangan yang dimasukan penngguna. Kemudian kode tersebut akan melakukan serangkaian pengecekan untuk menentukan tahun tersebut tahun kabisat atau tidak. Penggunaan pernyataan "if" untuk mengecek apakah tahun yang dimasukan pengguna habis dibagi 4. Jika tidak, maka tahun tersebut bukan tahun kabisat. Jika tahun tersebut habis dibagi 4, maka akan dilakukan pengecekan lagi untuk menentukan apakah tahun yang dimasukan habis dibagi 100 atau tidak. Jika tahun tersebut habis dibagi 100, maka tahun tersebut bukan tahun kabisat. Jika tahun yang dimasukan habis dibagi 4 dan habis dibagi 100, maka akan ada pengecekan lagi untuk menentukan apakah tahun tersebut habis dibagi 400 atau tidak. Jika tahun yang dimasukan tersebut habis dibagi 400, maka tahun tersebut adalah tahun kabisat. Setelah semua pernyataan selesai maka akan ditampilkan hasilnya yang telah dihitung.
