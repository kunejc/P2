#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int vrniStevilko() {
    char vhod = getchar();
    int izhod = 0;
    do
    {
        if (vhod == '#')
        {
            break;
        }
        izhod = izhod * 10;
        izhod += (vhod - '0');
        vhod = getchar();
    } while (vhod != '#');
    return izhod;
}

void kodiraj() {
    char znak = getchar();
    int stevec = 1;
    char vhod;
    do
    {   
        if (vhod == 10)
        {
            break;
        }
        vhod = getchar();
        if (vhod == znak)
        {
            stevec++;
        }
        else
        {
            if (stevec > 4)
            {
                printf("#%c%d#", znak, stevec);
            }
            else
            {   
                if (znak == '#')
                {
                    printf("##%d#", stevec);
                }
                else
                {
                    for (int i = 0; i < stevec; i++)
                    {
                        putchar(znak);                  
                    }  
                }   
            }
            znak = vhod;
            stevec = 1; 
        }
    } while (vhod != 10);
}

void dekodiraj() {
    char znak;
    int stevec;
    char vhod = getchar();
    do
    {   
        if (vhod == 10)
        {
            break;
        }
        if (vhod != '#')
        {
            putchar(vhod);
        }
        else
        {
            znak = getchar();
            stevec = vrniStevilko();
            for (int i = 0; i < stevec; i++)
            {
                putchar(znak);
            }  
        } 
        vhod = getchar();
    } while (vhod != 10);
}

int main() {
    int operacija = getchar() -'0';
    getchar();
    if (operacija == 1)
    {
        kodiraj();
    }
    if (operacija == 2)
    {
        dekodiraj();
    }
    //za testeranje "vrniStevilko()"
    if (operacija == 3)
    {
        printf("%d", vrniStevilko());
    }
    return 0;
}