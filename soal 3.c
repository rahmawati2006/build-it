#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int awal;
    int akhir;
    int total_semua = awal;
    scanf ("%d", &awal);
    scanf ("%d", &akhir);
     while(awal<akhir){
        awal++;
        total_semua += awal;
    } 
    printf ("%d", total_semua);
      return 0;
}