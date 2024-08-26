#include <stdio.h>

int main()  {

int number;
printf("Enter a Number");
scanf("%d", &number);
int isPrime = 1;

if (number <= 1) {
    isPrime = 0;

} else {
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }
}
if (isPrime == 1) {
    printf("%d is a prime number.\n", number);
} else {
    printf("%d is not a prime number.\n", number);
}
    return 0;
}