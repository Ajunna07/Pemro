#include <stdio.h>
#include "lingkaran.h"
#include "trapesium.h"
int main() {
    int pilihan;

    printf("=== PROGRAM HITUNG LUAS DAN KELILING BANGUN DATAR ===\n");
    printf("Pilih bangun datar (angka): \n");
    printf("1. Lingkaran\n");
    printf("2. Trapesium\n");
    printf("Pilihan: ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        float jari_jari;

        printf("Masukkan jari-jari lingkaran: ");
        scanf("%f", &jari_jari);

        
        float luas = luas_lingkaran(jari_jari);
        float keliling = keliling_lingkaran(jari_jari);

       
        tampilkan_hasil_lingkaran(jari_jari, luas, keliling);
    } else {
        float a, b, c, d, tinggi;
 
    printf("Program Menghitung Luas dan Keliling Trapesium\n\n");
 
    printf("Masukkan panjang sisi sejajar a : ");
    scanf("%f", &a);
    printf("Masukkan panjang sisi sejajar b : ");
    scanf("%f", &b);
    printf("Masukkan panjang sisi miring c  : ");
    scanf("%f", &c);
    printf("Masukkan panjang sisi miring d  : ");
    scanf("%f", &d);
    printf("Masukkan tinggi trapesium       : ");
    scanf("%f", &tinggi);
 
    printf("\n");
    tampilkan_trapesium(a, b, c, d, tinggi);
    }

    return 0;
}