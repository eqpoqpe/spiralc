#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char letter[1][26] = { \
        'a', 'b', 'c', 'd', 'e', 'z' ,'x', 'c', \
        'v', 'n', 'm', 'f', 'g', 'h', 'j', 'k', \
        'q', 'w', 'e', 'r', 't', 'y', 'u' ,'i', \
        'p'
};

static unsigned int r_val;
static time_t _t;

char *gtanm1(int digit)
{
        char *temp_res_ptr = (char *) malloc(sizeof(char) * digit + 1);

        srand((unsigned) time(&_t));

        for (int index = 0; index < digit; index++)
                *(temp_res_ptr + index) = letter[0][rand() % 20];

        return temp_res_ptr;
}
