#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {

    long a;
    long b;
    long dolA = 1;
    long izhod = -1;
    long delitelj = 1;
    char vhod = getchar() - '0';
    
    a = vhod;
    while (vhod != ' ') {
        vhod = getchar() -'0';
        if (vhod == ' ' -'0')
        {
            break;
        }
        a = a *10 + vhod;
        dolA++;
    }

    do
    {
        b = getchar();
        if (b == 10)
        {
            break;
        }
        delitelj = 1;
        for (int i = 0; i < (dolA - (b -'0')); i++)
        {
            delitelj = delitelj * 10;
        }
        izhod = a / delitelj;
        printf("%ld\n", izhod);
        a = a - izhod*delitelj;
        dolA -= (b - '0');
        
    } while (b != 10);
    
    return 0;
}