#include <string.h>

char *strncpy(char * restrict dest, const char * restrict src, size_t count)
{
    char *pDest = dest;
    const char *pSrc = src;
    for (size_t n = count; n > 0 && (*pDest++ = *pSrc++) != '\0'; n--)
    {
        ; /* nothing to do */
    }
    return dest;
}
