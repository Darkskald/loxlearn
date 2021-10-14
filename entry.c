#include "hashmap.h"
#include <stdio.h>

int main(){
    HashTable hm = make_default_hashmap();
    printf("%zu", hm.capacity);
    return 0;
} 
