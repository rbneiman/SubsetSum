// Alec Neiman
// afn343

#include <stdint.h>
#include <stdio.h>

int subsetS(uint32_t x[], uint32_t n, uint32_t k, uint32_t v){
    if(v==0 && k==0) return 1;
    if(v!=0 && k==0) return 0;
    if(n==0)         return 0;

    int found1 = 0;
    int found2 = subsetS(x + 1, n - 1, k, v);
    if(v>=x[0]) found1 = subsetS(x + 1, n - 1, k - 1, v - x[0]);

    return (found1||found2);
}
