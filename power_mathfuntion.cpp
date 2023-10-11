#include<math.h>
#include<stdio.h>
int main() {
    float base,exp,result;
    printf("Enter a base: ");
    scanf("%f",&base);
    printf("Enter an expo: ");
    scanf("%f",&exp);
    result = pow(base, exp);
    printf("%f^%f = %f",base,exp,result);
    return 0;
}
