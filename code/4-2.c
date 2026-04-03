#include <stdio.h>

void echo() {
    char buf[5];
    if (fgets(buf, sizeof(buf), stdin)) {
        printf("%s", buf);
    }
}

int main() {
    echo();
    return 0;
}