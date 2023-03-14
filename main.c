/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 
 *   Hari dan Tanggal    :
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// fungsi rekursif untuk melakukan perkalian digit
int perkalianJodoh(int num, int iterasi) {

    int n = num;
    int hasilPerkalian = 1;

    // perkalian
    while (n > 0) {
        if (n % 10 != 0) {
            hasilPerkalian *= (n % 10);
        }
        n = floor(n / 10);
    }

    // output hasil iterasi
    printf("Iterasi #%d: %d\n", iterasi, hasilPerkalian);

    if (hasilPerkalian < 10) {
        // base case
        return hasilPerkalian;
    } else {
        // recursion
        return perkalianJodoh(hasilPerkalian, iterasi + 1);
    }
}

int main() {

    int jurusan1, jurusan2, angkatan1, angkatan2, angkaJodoh;

    printf("#1\n");
    printf("Masukkan kode jurusan: ");
    scanf("%d", &jurusan1);
    printf("Masukkan angkatan: ");
    scanf("%d", &angkatan1);

    printf("\n#2\n");
    printf("Masukkan kode jurusan: ");
    scanf("%d", &jurusan2);
    printf("Masukkan angkatan: ");
    scanf("%d", &angkatan2);

    printf("\n");

    // penjumlahan untuk menggabungkan semua angka
    angkaJodoh = perkalianJodoh(jurusan1 * 10000000 + angkatan1 * 100000 + jurusan2 * 100 + angkatan2, 1);

    // final output
    if (angkaJodoh % 2 == 0) {
        printf("\nNay!");
    } else {
        printf("\nYay!");
    }

    return 0;
}
