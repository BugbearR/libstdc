#include <string.h>

int strncmp(const char *lhs, const char *rhs, size_t count)
{
    const char *pl = lhs;
    const char *pr = rhs;
    for (size_t n = count; n > 0; n--) {
        char cl = *pl++;
        char cr = *pr++;
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
