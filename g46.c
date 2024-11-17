/*Sharon is a programmer working on a project that requires identifying "strong numbers." A strong number is a number whose sum of the factorial of its digits is equal to the original number itself. Your task is to help her write a program to determine whether a given number is a strong number or not.



Example



Input

145

Output

145 is a strong number

Explanation : 1! + 4! + 5! = 1 + 24 + 120 = 145.

Input format :
The input consists of a positive integer N.

Output format :
If the entered number is a strong number, the output prints "N is a strong number", where N is an entered integer.

Otherwise, the output prints "N is not a strong number", where N is an entered integer.*/


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    int k = n;
    while (k != 0)
    {
        int r = k % 10;   //extract last digit
        
        int fact = 1;
        for (int i = 1; i <= r; i++)
        {
            fact *= i;
        }
        sum += fact;   //add factorial to sum
        k /= 10;       //remove last digit
    }
//check if the sum of factorials equals the original number
    if (sum == n)
    {
        printf("%d is a strong number", n);
    }
    else
    {
        printf("%d is not a strong number", n);
    }

    return 0;
}
