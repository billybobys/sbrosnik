#include <stdio.h> //3.4 семинар ввести номер месяца и вывести название времени года

int main (void)
{
    int a;
    printf ("Enter month number:\n");
    scanf ("%d", &a);

    if (a == 11 || a == 12 || a == 1)
        printf ("Winter\n");
    else 
        a = a;
    if (a == 2 || a == 3 || a == 4)
        printf ("Spring\n");
    else
        a = a;
    if (a == 5 || a == 6 || a == 7)
        printf ("Summer\n");
    else
        a = a;
    if (a == 8 || a == 9 || a == 10) 
        printf ("Autumn\n");
    else
        a = a; 

    return 0;
}