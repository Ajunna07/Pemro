#include <stdio.h>
#include "lingkaran.h"


float luas_lingkaran(float jari_jari) {
    float luas = PI * jari_jari * jari_jari;
    return luas;
}


float keliling_lingkaran(float jari_jari) {
    float keliling = 2 * PI * jari_jari;
    return keliling;
}


void tampilkan_hasil_lingkaran(float jari_jari, float luas, float keliling) {
    printf("\n=== Hasil Perhitungan Lingkaran ===\n");
    printf("Jari-jari : %.2f\n", jari_jari);
    printf("Luas      : %.2f\n", luas);
    printf("Keliling  : %.2f\n", keliling);
}