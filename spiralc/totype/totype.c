#include "totype.h"

#include <string.h>

int to_int(void *oriptr)
{
	int result = 0;
	unsigned int sn_len = strlen(oriptr);
	for (int index = (sn_len - 1); index >= 0; index--)
		result += (int) (*((char *)oriptr + \
		((sn_len - 1) - index)) - '0') * RET10(index);

	return result;
}
