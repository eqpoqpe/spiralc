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

char *gtanm1(int dig)
{
        char *template_str = (char *) malloc(sizeof(char) * dig + 1);
        srand((unsigned) time(&_t));
        for (int index = 0; index < dig; index++)
                *(template_str + index) = letter[0][rand() % 20];
        return template_str;
}
