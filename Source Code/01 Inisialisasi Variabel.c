/* File : 01 Inisialisasi Variabel.c */
/* Penulis : Kevin Petrus Tambunan, email: tambunankp23@gmail.com */
/* Inisialisasi atau mendeklarasikan variabel serta mengisinya */

#include<stdio.h>

int main()
{ /* Blok Utama Program */
    /* Kamus */
    int angka = 23;         // Inisialisasi variabel integer
    float rill = 0.25;      // Inisialisasi variabel float atau bilangan real (bilangan pecahan)
    char karakter = 'K';    // Inisialisasi variabel char atau bertipe karakter
    
    // Inisiasialisasi variabel String, ada dua cara:
    // -> Menggunakan array char (Bisa diubah isinya)
    char teks[] = "ini Kevin";
        // bentuk lainnya:
        // char text[] = {'i', 'n', 'i', ' ', 'K', 'e', 'v', 'i', 'n', '\0' };
    
    // -> Menggunakan pointer (Read-only atau tidak bisa diubah isi nya)
    char *pesan = "Hai apakabar kalian semua";

    /* Cetak seluruh variabel */
    printf("Cetak integer (bilangan bulat): %d", angka);
    printf("\nCetak float (bilangan real): %0.3f", rill);
    printf("\nCetak char (karakter): %c", karakter);
    printf("\n\nPerkenalkan %s, \nPesan: %s", teks, pesan);
    // cara lain mencetak string:
        // printf(teks);
        // printf(pesan);

    return 0;
    // Arti return 0 adalah kode utama berhasil di eksekusi ("exit code 0")
}
