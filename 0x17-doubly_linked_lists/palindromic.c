#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n) {
    int reversed = 0;
    int original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int largest = 0;
    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            int product = i * j;
            if (is_palindrome(product) && product > largest) {
                largest = product;
            }
        }
    }

    FILE *f = fopen("102-result", "w");
    if (f == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(f, "%d", largest);
    fclose(f);

    return 0;
}
