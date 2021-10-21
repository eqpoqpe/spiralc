#if (1)
	#include "debug.def.h"
#endif /* debug */

#include <string.h>

#include "totype.h"

int toint(void *oriptr)
{
	int result = 0;
	unsigned int sn_len = strlen(oriptr);
	for (int index = (sn_len - 1); index >= 0; index--)
		result += \
		(int) (*((char *)oriptr + \
		((sn_len - 1) - index)) - '0') * \
		RET10(index);
	return result;
}
