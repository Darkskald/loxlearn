#ifndef HASHMAP_H
#define HASHMAP_H
#include <stddef.h>

#define INITIAL_HASHMAP_SIZE 1000

// type definitions
typedef int (*hash_function)(char*);

typedef struct HashMap{
    size_t capacity;
    hash_function hasher;
    char* table;
} HashMap;

// helper functions
int primitive_hash(char* key);

// Hashmap methods
HashMap make_default_hashmap();

void hm_init_with(HashMap* hm, char c);
void hm_print_all(HashMap* hm);





#endif