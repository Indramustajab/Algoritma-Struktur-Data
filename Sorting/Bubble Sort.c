#include <stdio.h>

int main(){

    int arr[50], input, x, y, temp;

    printf("Masukkan jumlah berapa kali inputan nilai: ");

    scanf("%d", &input);

    printf("Masukkan nilai: ");

    for(x = 0; x < input; x++)

        scanf("%d", &arr[x]);

    for(x = 0; x < input - 1; x++){

        for(y = 0; y < input - x - 1; y++){

            if(arr[y] > arr[y+1]){

                temp = arr[y];

                arr[y] = arr[y+1];

                arr[y+1] = temp;

            }

        }

    }
    printf("\n");
    printf("Output program : \n");

    for(x = 0; x < input; x++){

        printf("%d  ", arr[x]);

    }

    return 0;

}
