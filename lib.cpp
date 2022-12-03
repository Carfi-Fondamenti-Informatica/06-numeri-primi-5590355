#include "lib.h"

bool numeriprimi (int n, int k) {
    if (k==2) {
        return true;
    }
    else if (n==0||n==1){
        return false;
    }
    else if ((n%k)==0) {
        return false;
    }
    else return numeriprimi(n,k-1);
}
