#include <stdio.h>

unsigned long long factorial(unsigned long long n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

unsigned long long combinations(unsigned long long n, unsigned long long k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void print_line(unsigned long long n) {
    for (unsigned long long i = 0; i < n + 1; i++) {
        printf("%llu ", combinations(n, i));
    }
    printf("\n");
}

int main(int argc, char** argv) {
    for (unsigned int i = 0; i < 21; i++) print_line(i);
    return 0;
}