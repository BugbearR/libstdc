#include <string.h>

void *memmove(void *dest, const void *src, size_t count)
{
    unsigned char *pDest;
    const unsigned char *pSrc;
    if (dest < src) {
        pDest = dest;
        pSrc = src;
        for (size_t n = count; n > 0; n--)
        {
            *pDest++ = *pSrc++;
        }
    }
    else if (dest > src) {
        pDest = dest + count;
        pSrc = src + count;
        for (size_t n = count; n > 0; n--)
        {
            *--pDest = *--pSrc;
        }
    }
    return dest;
}
