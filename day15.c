#include <stdio.h>
int main() {
    int n, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) flag = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);
    return 0;
}
