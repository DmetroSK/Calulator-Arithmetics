#include <stdio.h>

void main()
{
 long int num;

     printf("Enter the octal number : ");
     scanf("%ld", &num);

    long int decimal = 0, base = 1, reminder;

    while (num > 0)
    {
        reminder = num% 10;
        decimal = decimal + (reminder* base);
        num= num/ 10 ;
        base = base * 8;
    }
    printf("\nDecimal Number :%ld ", decimal);

}
