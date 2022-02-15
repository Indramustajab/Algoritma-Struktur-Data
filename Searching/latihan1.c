#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i, data[i], cari,jumlah;
    printf("mau berapa data yang disimpan : ");
    scanf("%d", &n);
    printf("masukkan %d integer (s): ",n);
    for(i=0; i<n; i++)
    scanf("%d", &data[i]);

    printf("data yang mau dicari : ");
    scanf("%d", &cari);
    for(int i=0; i<n; i++)
    {
        if (data[i]==cari)
        {
            printf("angka %d ketemu dan tersimpan di %d", cari, i+1);
            jumlah++;
            break;
        }
    }
        if(jumlah==n)

        printf("angka %d tidak ketemu\n", cari);

        else
            printf("angka %d ketemu, dan tampil sebanyak %d kali didalam array\n", cari, jumlah);

    return 0;
}
