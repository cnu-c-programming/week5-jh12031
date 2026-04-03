#include <stdio.h>

void echo() {
    char buf[5];
    scanf("%4s", buf);
    printf("%s\n", buf);
}

int main() {
    echo();
    return 0;
}