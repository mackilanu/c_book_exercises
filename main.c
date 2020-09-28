#include <stdio.h>
#include "src/fahrtocels.h"
#include "src/counter.h"

void value_of_eof();
int line_counter();
void char_counter();

int main()
{
    Counter cnt = counter();

    printf("Tabs: %d\nNewlines: %d\nBlanks: %d\n", cnt.nt, cnt.nn, cnt.nb);
    
    return 0;
}

// Exercise 1-7
void value_of_eof() 
{
    printf("The value of EOF is: %d\n", EOF);
}



