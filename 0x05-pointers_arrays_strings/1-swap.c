/**
 * swap_int - swaps the value of the variable
 *
 * @a: pointer to the variable a
 * @b: pointer to the variable b
 * @c: swap middleman
 * @date 2022-03-21
 *
 * @copyright Copyright (c) 2022
 *
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
