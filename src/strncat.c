#include <string.h>

char *strncat(char * restrict dest, const char * restrict src, size_t count)
{
    char *pDest = dest;
    const char *pSrc = src;
    size_t n;
    /* skip to end of dest */
    for (n = count; n > 0 && *pDest++ != '\0'; n--)
    {
        ; /* nothing to do */
    }
    pDest--;
    for (; n > 0 && (*pDest++ = *pSrc++) != '\0'; n--)
    {
        ; /* nothing to do */
    }
    return dest;
}
