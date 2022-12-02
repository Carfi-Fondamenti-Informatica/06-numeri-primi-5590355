#include "lib.h"

bool numeriprimi (int n, int k) {
    if (k==1) {
        return true;
    }
    else if ((n%k)==0) {
        return false;
    }
    else return numeriprimi(n,k-1);
}
