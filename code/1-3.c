#include <stdio.h>

void print_reverse(int *arr, int size) {
    int *p = arr + (size - 1);

    for (int i = 0; i < size; i++) {
        printf("%d", *p);
        if(i < size - 1) {
            printf(" ");
        }
        p--;
    }


}

int main() {
    int nums[] = {1, 2, 3, 4, 5};

    print_reverse(nums, 5);
    printf("\n");

    return 0;
}