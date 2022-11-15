#include <stdio.h>

int main (){
    int a, b, brs, klm, hsl;
    printf("\t\t- - - Program Matriks Menggunakan Array - - -\n\n");
    printf("__________________________________________________\n\n");
    printf (" Masukan Baris : "); scanf ("%d",&brs);
    printf (" Masukan Kolom : "); scanf ("%d",&klm);

    int arr[brs][klm];
    printf("__________________________________________________\n");
    printf ("\n Masukkan angka ke dalam matriks : ");
    printf ("\n");
        for (a=0;a<brs;a++){
            for(b=0;b<klm;b++){
                printf ("\n Baris <%d> Kolom <%d> : ",a+1,b+1); scanf ("%d",&arr[a][b]);
        }
    }
    printf("__________________________________________________\n");
        printf ("\n");
        for (a=0;a<brs;a++){
            for(b=0;b<klm;b++){
                printf (" \t%d ",arr[a][b]);
        }
        printf("\n");
    }
        hsl=0;
        for (a=0;a<brs;a++){
            for(b=0;b<klm;b++){
              hsl=hsl+arr[a][b];
            }
        }
        printf("\n Total seluruh nilai yang diinput : %d ", hsl);
        printf("\n__________________________________________________\n");
        printf ("\n");
    return 0;
}
