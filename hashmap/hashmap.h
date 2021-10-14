#ifndef HASHMAP_H
#define HASHMAP_H
#include <stddef.h>

#define INITIAL_HASHMAP_SIZE 1000

// type definitions
typedef int (*hash_function)(char*);

typedef struct HashMap{
    size_t capacity;
    hash_function hasher;
    int* table;
} HashMap;

// functions
int primitive_hash(char* key);
HashMap make_default_hashmap();


#endif