#include <string.h>

void *memcpy(void * restrict dest, void * restrict src, size_t count)
{
    unsigned char *pDest = dest;
    const unsigned char *pSrc = src;
    for (size_t n = count; n > 0; n--)
    {
        *pDest++ = *pSrc++;
    }
    return dest;
}
