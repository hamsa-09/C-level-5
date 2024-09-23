#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isprime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long n;
    scanf("%ld", &n);

    int original = n; 
    int len = 0;

    
    while (n > 0) {
        n /= 10;
        len++;
    }

    n = original; 
    for (int i = 0; i < len; i++) {

        int first = n / (int)pow(10, len - 1);
        int rem = n % (int)pow(10, len - 1);
        int new_num = rem * 10 + first;

        
        if (!isprime(new_num)) {
            printf("%d is not a circular prime\n", original);
            return 0;
        }

        n = new_num; 
    }

    printf("%d is a circular prime\n", original);
    return 0;
} 
