#include <string.h>

char *strcpy(char * restrict dest, const char * restrict src)
{
    char *pDest = dest;
    const char *pSrc = src;
    while ((*pDest++ = *pSrc++) != '\0')
    {
        ; /* nothing to do */
    }
    return dest;
}
