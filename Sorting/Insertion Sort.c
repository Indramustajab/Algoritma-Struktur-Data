#include <stdio.h>

int main(){

   int i, j, n, temp, number[25];

   printf("Masukkan banyaknya jumlah data : ");
   scanf("%d",&n);

   printf("Masukkan nilai : ", n);

   for(i=0;i<n;i++)
      scanf("%d",&number[i]);

   for(i=1;i<n;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }
   printf("\n");
   printf("Output program : ");
   for(i=0;i<n;i++)
      printf(" %d",number[i]);

   return 0;
}
