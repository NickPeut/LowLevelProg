#include <stdio.h>
#include <stdlib.h>
#include "repeat_func.h"

int main() {
    int *a;
    int n;
    scanf("%d", &n);
    a = (int*) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    struct pair res = get_max_repeat_number(a, n);
    printf("%d %d", res.first, res.second);
    return 0;
}