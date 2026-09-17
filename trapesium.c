#include <stdio.h>
#include "trapesium.h"
 
/* ==================== TRAPESIUM ==================== */
 
float luas_trapesium(float sisi_a, float sisi_b, float tinggi) {
    return ((sisi_a + sisi_b) * tinggi) / 2.0;
}
 
float keliling_trapesium(float sisi_a, float sisi_b, float sisi_c, float sisi_d) {
    return sisi_a + sisi_b + sisi_c + sisi_d;
}
 
void tampilkan_trapesium(float sisi_a, float sisi_b, float sisi_c, float sisi_d, float tinggi) {
    float luas = luas_trapesium(sisi_a, sisi_b, tinggi);
    float keliling = keliling_trapesium(sisi_a, sisi_b, sisi_c, sisi_d);
 
    printf("===== TRAPESIUM =====\n");
    printf("Sisi sejajar a  : %.2f\n", sisi_a);
    printf("Sisi sejajar b  : %.2f\n", sisi_b);
    printf("Sisi miring c   : %.2f\n", sisi_c);
    printf("Sisi miring d   : %.2f\n", sisi_d);
    printf("Tinggi          : %.2f\n", tinggi);
    printf("Luas trapesium    = %.2f\n", luas);
    printf("Keliling trapesium= %.2f\n", keliling);
    printf("======================\n\n");
}