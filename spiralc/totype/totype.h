#ifndef _TOTYPE_H
#define _TOTYPE_H

#define RET10(ln) ({ \
    int ret10_inbuild_val = 1; \
    if (ln >= 1) { \
    for (int ret10_inbuild_i = 0; \
	ret10_inbuild_i < ln; \
	ret10_inbuild_i++) \
    ret10_inbuild_val *= 10; \
    } \
    ret10_inbuild_val; \
    })

#endif /* _TOTYPE_H */
