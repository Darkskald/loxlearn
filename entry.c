#include "hashmap/hashmap.h"
#include <stdio.h>

int main(){
    HashMap hm = make_default_hashmap();
    hm_init_with(&hm, 'a');
    hm_print_all(&hm);

    printf("%zu", hm.capacity);
    return 0;
} 
