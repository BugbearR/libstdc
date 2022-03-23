#include <string.h>

char *strcat(char * restrict dest, const char * restrict src)
{
    char *pDest = dest;
    const char *pSrc = src;
    /* skip to end of dest */
    while (*pDest++ != '\0')
    {
        ; /* nothing to do */
    }
    pDest--;
    while ((*pDest++ = *pSrc++) != '\0')
    {
        ; /* nothing to do */
    }
    return dest;
}
