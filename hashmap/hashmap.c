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
    out.table = (char*)malloc(INITIAL_HASHMAP_SIZE*sizeof(char));
    return out;
}

void hm_init_with(HashMap* hm, char c){
    for(int i=0; i < hm->capacity; i++){
        hm->table[i]=c;
    }
}

void hm_print_all(HashMap* hm){
    for(int i=0; i < hm->capacity; i++){
        printf("%c\n", hm->table[i]);
    }
}

int hash_calculator(hash_function hasher, char* key){
    return (hasher)(key);
}

