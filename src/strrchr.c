#include <string.h>

char *strrchr(const char *str, int ch)
{
    const char *p = str;
    const char *pFound = NULL;
    for (;;)
    {
        char c1 = *p++;
        if (c1 == '\0')
        {
            return (char *)pFound;
        }

        if (c1 == ch)
        {
            pFound = p - 1;
        }
    }
}
