#include <stdio.h>

int main() {
    // Part a)
    int numerator = 1;
    int denominator = 2;
    float a_result = (float)numerator / denominator;
    printf("One half is %.0f%%\n", a_result * 100);

    // Part b)
    int num1 = 10;
    int num2 = 3;
    int difference = num1 - num2;
    printf("The difference between %d and %d is %d\n", num1, num2, difference);

    // Part c)
    float float_num1 = 1.0;
    float float_num2 = 3.0;
    float division_result = float_num1 / float_num2;
    printf("%.6f / %.6f is %.6f\n", float_num1, float_num2, division_result);

    return 0;
}
