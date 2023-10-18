#include <stdio.h> //3.2 семинар Ввести пять чисел и вывести наименьшее из них нужно напечатать наименьшее число

int main (void){
    int a , b , c , d , f , m = 0; // m - наименьшее из вводных
    printf ("enter 5 numbers:\n");
    scanf ("%d%d%d%d%d", &a ,&b ,&c ,&d ,&f);
    

        if (a <= b)
                m = a;
        else
                m = b;
        if (m <= c)
                m += 0;
        else
                m = c;
        if (m <= d)
                m += 0;
        else
                m = d;
        if (m <= f){
                m += 0;
                printf ("%d\n", m);}
        else
                printf ("%d\n", f);
    
return 0;

}