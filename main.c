#include <stdio.h>
void tobinary(int num)
{
    int i = sizeof(int) *8 -1;

    for (; i >= 0; i--)
    {
        if ((num >> i) & 1)
            printf("1");
        else
            printf("0");
    }
}
int main() {
    int num, shift, right, left;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("How many shifts do you want? ");
    scanf("%d", &shift);

    right = (num >> shift);
    left = (num << (sizeof(int) *8 - shift));

    tobinary(right + left);




    return 0;
}