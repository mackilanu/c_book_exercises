#include <stdio.h>
#include "counter.h"

int line_counter()
{
    double lc;
    int c;

    while((c = getchar()) != EOF)
        if(c == '\n')
            ++lc;

    return lc;
}

Counter counter()
{
    Counter data = counter_new();
    int c;

    while((c = getchar()) != EOF) {
        if(c == '\n')
            ++data.nn;
        else if(c == ' ')
            ++data.nb;
        else if(c == '\t')
            ++data.nt;
    }

    return data;
}

void char_counter()
{
    double nc;

    for(nc = 0; getchar() != EOF; ++nc)
        ;

    printf("%.0f\n", nc);
}


Counter counter_new() 
{
    Counter counter;

    counter.nb = 0;
    counter.nt = 0;
    counter.nn = 0;

    return counter;
}
