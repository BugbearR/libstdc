#include <string.h>

int memcmp(const void *lhs, const void *rhs, size_t count)
{
    const unsigned char *pl = lhs;
    const unsigned char *pr = rhs;
    for (size_t n = count; n > 0; n--)
    {
        unsigned char cl = *pl++;
        unsigned char cr = *pr++;
        if (cl < cr)
        {
            return -1;
        }
        else if (cl > cr)
        {
            return 1;
        }
    }
    return 0;
}
