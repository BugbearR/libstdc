#include <string.h>

char *strchr(const char *str, int ch)
{
    const char *p = str;
    for (;;)
    {
        char c1 = *p++;
        if (c1 == '\0')
        {
            return NULL;
        }

        if (c1 == ch)
        {
            return (char *)--p;
        }
    }
}
