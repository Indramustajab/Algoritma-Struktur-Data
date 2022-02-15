#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, Data[i], cari,jumlah;
    printf("mau berapa data yang disimpan : ");
    scanf("%d", &n);
    printf("masukkan %d integer(s): ", n);
    for(i=0; i<n; i++)
        scanf("%d", &Data[i]);

    printf("data yang mau dicari : ");
    scanf("%d", &cari);
    for(int i=0; i<n; i++)
    {
        if (Data[i]==cari)
        {
            printf("angka %d ketemu dan tersimpan di lokasi %d\n", cari, i+1);
            jumlah++;

        }
    }
        if(jumlah==0)

        printf("angka %d tidak ketemu\n", cari);

        else
            printf("angka %d ketemu, dan tampil sebanyak %d kali didalam array\n", cari, jumlah);

    return 0;
}
