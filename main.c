#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b);
void swapPointers(int *a, int *b);

typedef struct s {
    int a;
    int b;
    short d;
} s;

int main() {
    int a = 5;
    int *p = &a;
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(a);
    double d = 3.14;
    printf("%d\n", size);
    printf("sizeof pointer %d \n", sizeof(p), sizeof(p));
    printf("sizeof arr %lu\n", sizeof(arr));
    printf("sizeof d %g\n", d);
    printf("%p\n", p);

    for(int i = 0; i < 4; ++i) {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }

    s s1 = {1, 2};
    printf("a %d and b %d\n", s1.a, s1.b);

    s1.a = 10;
    s1.b = 12;

    printf("New a %d and b %d\n", s1.a, s1.b);

    printf("sizeof s: %d\n", sizeof(s));

    char str[] = "Hello";

    printf("%c\n", str[5]);
    for (int i = 0; i < sizeof(str); ++i) {
        printf("%c\n", str[i]);
    }

    int *array = (int *)malloc(sizeof(int) * 10);
    array[0] = 1;
    printf("array[0] = %d\n", array[0]);

    free(array);

    int a1 =21, b1=7;
    printf("Before swap: a1 = %d, b1 = %d\n", a1, b1);
    swap(a1, b1);
    printf("After swap: a1 = %d, b1 = %d\n", a1, b1);

    printf("Before swap: a1 = %d, b1 = %d\n", a1, b1);
    swapPointers(&a1, &b1);
    printf("After swap: a1 = %d, b1 = %d\n", a1, b1);

    return 0;
}

void swap(int a, int b) {
    int tmp = b;
    b = a;
    a = tmp;
}

void swapPointers(int *a, int *b) {
    int tmp = *b;
    *b = *a;
    *a = tmp;
}