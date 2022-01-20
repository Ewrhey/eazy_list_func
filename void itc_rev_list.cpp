#include "easy_list.h"
void itc_rev_list(vector <int> &mass){
    if (mass.size() > 0){
    int sup = 0;
    for (int i = 0 ; i <= (mass.size()/2); i++){
        sup = mass[i];
        mass[i] = mass[(mass.size() - 1) - i];
        mass[(mass.size() - 1) - i] = sup;
    }
}
}
