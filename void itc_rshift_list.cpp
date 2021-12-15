#include "easy_list.h"
void itc_rshift_list(vector <int> &mass){
    if (mass.size() > 1){
    int sup = mass[mass.size() - 1];
    for (int i = mass.size() - 2; i >= 0; i--){
        mass[i + 1] = mass[i];
    }
    mass[0] = sup;
    }
}
