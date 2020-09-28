#include <stdio.h>
#include "fahrtocels.h"

#define LOWER 0
#define UPPER 300
#define STEP 20

//Prints a fahrenheit to celsis conversion table, from top to bottom
void fahr_to_cels_rev() 
{
    for(int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

//Prints a fahrenheit to celsis conversion table, from bottom to top
void fahr_to_cels()
{
    for(int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
