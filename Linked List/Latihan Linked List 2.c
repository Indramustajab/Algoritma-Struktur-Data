#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node *head;

void awal()
{
    //isi data dinode awal
    struct node *ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr==NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Masukkan data : ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("Data berhasil disimpan di NODE awal\n\n");
    }
}

void akhir()
{
    //isi data dinode akhir
    struct node *ptr, *temp;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr==NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Masukkan data : ");
        scanf("%d", &item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Berhasil simpan NODE !");
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Berhasil simpan NODE akhir!");
        }
            }
        }




void sembarang()
{
    //isi data dinode sembarang
    struct node *ptr, *temp;
    int item, loc, i;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr==NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Masukkan data : ");
        scanf("%d", &item);
        ptr->data = item;

        printf("Mau simpan dilokasi berapa? ");
        scanf("%d", &loc);

        temp = head;
        for(i = 0; i<loc; i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("Tidak bisa simpan datamu!");
                return;
            }
        }
        ptr->next = temp -> next;
        temp->next = ptr;
        printf("NODE berhasil disimpan\n");
    }
}

void cetak()
{
   //untuk mencetak isi Linked List
   struct node *ptr;

   ptr = head;
   if(ptr == NULL)
   {
       printf("Listnya kosong!");
   }
   else
  {
      printf("\nCetak isi List...");
      while(ptr != NULL)
      {
          printf("\n%d", ptr->data);
          ptr = ptr->next;
      }
      printf("\n");
  }
}

int main()
{

    int pilihan = 0;
    while(pilihan!=5)
    {
        printf("****** Menu Latihan Linked List******");
        printf("\n-------------------------------------");
        printf("\n1. Input data diawal \n2. Inpur data di akhir \n3. Input data sekarang \n4. Lihat data dalam Linked List \n5. Keluar\n");
        printf("Pilihanmu ?");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
            case 1:
            awal();
            break;

            case 2:
            akhir();
            break;

            case 3:
            sembarang();
            break;

            case 4:
            cetak();
            break;

            case 5:
            exit(0);
            break;

            default:
            printf("Silahkan pilihan yang benar");

        }
    }
}
