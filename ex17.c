#include <stdio.h>

int hamming_weight(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n = n / 2;
    }
    return count;
}

int main() {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    int bits_set = hamming_weight(n);
    printf("The number of bits set in %d is %d\n", n, bits_set);

    return 0;
}