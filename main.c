#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "intset.c"
#include "murmur3.c"

int main(int argc, char **argv) {

    intset seen;
    intset_init(&seen);

    char *line = 0;
    size_t size;
    ssize_t line_size;

    uint64_t hash[2];
    uint32_t seed = 42;
    uint64_t hash_int;

    while((line_size = getline(&line, &size, stdin)) != -1) {

        MurmurHash3_x64_128(line, line_size, seed, hash);
        hash_int = hash[0] ^ hash[1];

        if (!intset_contains(&seen, hash_int)) {
            printf("%s\n", line);
            intset_insert(&seen, hash_int);
        }

    }



}
