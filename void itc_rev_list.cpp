#include "easy_list.h"
void itc_rev_list(vector <int> &mass){
    if (mass.size() > 0){
    len = mass.size()/2;
    int sup = 0;
    for (int i = 0 ; i <= (len); i++){
        sup = mass[i];
        mass[i] = mass[(mass.size() - 1) - i];
        mass[(mass.size() - 1) - i] = sup;
    }
}
}
