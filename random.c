#include "random.h"
unsigned int lcg(void) {
    seed = (1103515245 * seed + 12345) % 2147483648;
    return seed;
}