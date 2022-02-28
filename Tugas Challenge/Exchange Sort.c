#include <stdio.h>

void sort( int[], int );
void sort( int a[], int n )
	{
		int i, j, temp;

		i = 0;
		while( i < (n-1)) {
			j = i+1;
			while(j<n) {
				if( a[i] > a[j] ) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
				j++;
			}
			i++;
		}
	}

int main()
	{
		int arr[] = {23, 65, 30, 8, 33, 24, 76, 7};
		int loop;

		sort(arr, 8);
		printf("Output program : \n");
		for( loop = 0; loop < 8; loop++ )
			printf("%d ", arr[loop] );
	}

