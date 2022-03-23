#include <string.h>

void *memchr(const void *ptr, int ch, size_t count)
{
    const char *p = ptr;
    for (size_t n = count; n > 0; n--)
    {
        char cp = *p++;

        if (cp == ch)
        {
            return (char *)--p;
        }
    }
    return NULL;
}
