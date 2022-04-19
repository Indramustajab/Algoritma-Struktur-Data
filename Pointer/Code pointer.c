#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Test
    {

    int x;
    char c;

    };

    struct Test *test1 = (struct Test*)malloc(sizeof(struct Test));
    test1->x = 10;
    test1->c = 'A';


    printf("Isi dari test1.x: %d\n", test1->x);
    printf("Isi dari test1.c: %c\n", test1->c);
    free(test1);
    return 0;
}


