#include <iostream>

long calc(int n, int r) {
     if ((n == 0) || (r == 0) || (n == r)) return 1;
     else return (calc(n-1,r-1) + calc(n-1,r));
} 

int main() {
    printf("Enter a number = ");
    int num;
    scanf("%i", &num);
    for (int i = 0; i<=num; i++) {
        for (int j = num; j > i; j--) printf("   ");
        for (int k = 0; k <= i; k++) printf("%6d", calc(i,k));
        printf("\n");
    } 
    return 0;
}
