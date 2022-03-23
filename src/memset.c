#include <string.h>

void *memset(void *dest, int ch, size_t count)
{
    unsigned char *p = dest;
    for (size_t n = count; n > 0; n--) {
        *p++ = ch;
    }
    return dest;
}
