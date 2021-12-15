#include "easy_list.h"
void itc_super_shift_list(vector <int> &mass, int n){
if (mass.size() > 1){
    if (n < 0){
        n = n * (-1);
        int sup = mass[0];
        for (int i = 0; i < n % mass.size(); i++){
            sup = mass[0];
            for (int i = 1 ; i < mass.size(); i++)
                mass[i - 1] = mass[i];
            mass[mass.size() - 1] = sup;
        }
    }
    else{
        for (int i = 0; i < n % mass.size(); i++){
            int sup = mass[mass.size() - 1];
            for (int i = mass.size() - 2; i >= 0; i--)
                mass[i + 1] = mass[i];
            mass[0] = sup;
        }
    }
}
}
