#include <string.h>

int strcmp(const char *lhs, const char *rhs)
{
    const char *pl = lhs;
    const char *pr = rhs;
    for (;;) {
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
        else if (cl == '\0')
        {
            return 0;
        }
    }
}
