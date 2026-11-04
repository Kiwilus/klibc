#include <stdio.h>
#include <klib/math.h>

int main(void)
{
    printf("====MATHEMATICAL OPERATIONS====\n");
    printf("5 + 10: %d\n", klib_add(10, 5));
    printf("10 - 5: %d\n", klib_sub(10, 5));
    printf("4 * 5: %d\n", klib_mul(4, 5));
    printf("4 / 2: %d\n", klib_div(4, 2));
    printf("Absoulute value of -5: %d\n", klib_abs(5));
    printf("Squareroot of 9: %.2f\n", klib_sqrt(9));
    printf("Bigger value of 10 and 9: %d\n", klib_max(10, 9));
    printf("Smaller alue of 10 and 9: %d\n", klib_min(10, 9));

    return 0;
}
