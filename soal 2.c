#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    int Hasil;
    scanf("%d", &N); 
    for(int i=1; i<11; i++){
        Hasil=N*i;
        printf ("%d x %d = %d\n",N,i, Hasil);
}
        return 0;
   
}