#include <stdio.h> // 3.3 семинар ввести три числа и определить, верно ли, что они вводились в порядке возрастания.

int main (void){
    int a, b, c ;
    printf ("enter 3 numbers:\n");
    scanf ("%d%d%d", &a, &b, &c);

    if (a <= b && b <= c)
        printf ("Yes\n");
    else
        printf ("No\n");

return 0;
}