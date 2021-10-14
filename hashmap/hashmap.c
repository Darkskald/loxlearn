#include "hashmap.h"
#include <stdio.h>
#include <stdlib.h>


int primitive_hash(char* key){
    return 5;
}

HashMap make_default_hashmap(){
    HashMap out;
    out.capacity = INITIAL_HASHMAP_SIZE;
    out.hasher = primitive_hash;
    out.table = (int*)malloc(INITIAL_HASHMAP_SIZE*sizeof(int));
    return out;
}

int hash_calculator(hash_function hasher, char* key){
    return (hasher)(key);
}

