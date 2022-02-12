#include <stdio.h>
#include <stdlib.h>
#include "repeat_func.h"

struct pair get_max_repeat_number(int* a, int n) {
    int res;
    int repeat_res = 0;
    for(int i = 0; i < n; i++) {
        int repeat_num = 0;
        for(int j = i; j < n; j++) {
            if(a[i] == a[j]) {
                repeat_num++;
            }
        }
        if(repeat_res <= repeat_num) {
            res = a[i];
            repeat_res = repeat_num;
        }
    }
    struct pair res_pair;
    res_pair.first = res;
    res_pair.second = repeat_res;

    return res_pair;
}