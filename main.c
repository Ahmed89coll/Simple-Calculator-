#include<stdio.h>
#define MAX_NUMS 10  

float add(float nums[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) sum += nums[i];
    return sum;
}

float sub(float nums[], int n) {
    float result = nums[0];
    for (int i = 1; i < n; i++) result -= nums[i];
    return result;
}

float mult(float nums[], int n) {
    float result = 1;
    for (int i = 0; i < n; i++) result *= nums[i];
    return result;
}

float divd(float nums[], int n) {
    float result = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] == 0) {
            printf("Error: Division by zero!\n");
            return 0;
        }
        result /= nums[i];
    }
    return result;
}

int main() {
    int n;
    char opp;
    float nums[MAX_NUMS];

    printf("How many numbers? (max %d): ", MAX_NUMS);
    scanf("%d", &n);

    if (n < 2 || n > MAX_NUMS) {
        printf("Invalid number of inputs!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &nums[i]);
    }

    printf("Enter the operator (+,-,*,/): ");
    scanf(" %c", &opp);

    switch (opp) {
    case '+':
        printf("Result: %f\n", add(nums, n));
        break;
    case '-':
        printf("Result: %f\n", sub(nums, n));
        break;
    case '*':
        printf("Result: %f\n", mult(nums, n));
        break;
    case '/':
        printf("Result: %f\n", divd(nums, n));
        break;
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}


