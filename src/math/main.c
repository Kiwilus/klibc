#include <klib/math.h>

/*
 * The 4 basic mathematical Operations
 * add: adds two numbers
 * sub: ssubtracts two numbers
 * mul: multiplies two numbers
 * div: divides two numbers
*/
int klib_add(int num1, int num2)
{
    return num1 + num2;
}

int klib_sub(int num1, int num2)
{
    return num1 - num2;
}

int klib_mul(int num1, int num2)
{
    return num1 * num2;
}

int klib_div(int num1, int num2)
{
    return num1 / num2;
}

// get absolute value of a number
int klib_abs(int num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

// get squareroot of a number using the 'Newton method'
/*
 * It starts with an initial guess and repeatedly improves it
 * using the formula:
 *
 * newGuess = (guess + x / guess) / 2
 *
 * The process continues until the difference between two
 * consecutive guesses is smaller than the defined accuracy.
 *
 * Finally, the function returns the calculated square root.
 * It does not require math.h or stdlib.h.
 */
double klib_sqrt(int num)
{
    if (num < 0)
        return -1;

    if (num == 0)
        return 0;

    double guess = num;
    double accuracy = 0.000001;

    while (1)
    {
        double new_guess = (guess + num / guess) / 2;

        if (new_guess - guess < accuracy &&
            guess - new_guess < accuracy)
            break;

        guess = new_guess;
    }

    return guess;
}

// returns the bigger number of two numbers
int klib_max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    } else
    {
        return num2;
    }
}

// returns the smaller number of two numbers
int klib_min(int num1, int num2)
{
    if (num1 < num2)
    {
        return num1;
    } else
    {
        return num2;
    }
}
