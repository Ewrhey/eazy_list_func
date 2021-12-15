#include "easy_list.h"
void itc_rev_par_list(vector <int> &mass){
    if (mass.size() > 1){
    int sup = 0;
    for (int i = 1 ; i < mass.size(); i = i + 2){
        sup = mass[i];
        mass[i] = mass[i - 1];
        mass[i - 1] = sup;
    }
    }
}
