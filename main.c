#include <stdio.h>

typedef struct s {
    int a;
    short b;
} s;

int main() {
    int a = 5;
    int *p = &a;
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(a);
    printf("%d\n", size);
    printf("%p\n", p);

    for(int i = 0; i < 4; ++i) {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }

    s s1 = {1, 2};
    printf("a %d and b %d\n", s1.a, s1.b);

    s1.a = 10;
    s1.b = 12;

    printf("New a %d and b %d\n", s1.a, s1.b);

    return 0;
}
