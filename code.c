
#include <stdio.h>

int myFunction(int, int);
int main() {

    int result = myFunction(5, 3);
    printf("The result is: %d\n", result);
    return 0;
}

int myFunction(int x, int y) {
    return x + y;
}
