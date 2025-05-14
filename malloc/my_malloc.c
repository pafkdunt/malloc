#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/mman.h>
#include <stdbool.h>



struct heap_data {
    struct chunk *start; 
    uint32_t avail_mem;
};

struct chunk {
    uint32_t size;
    bool in_use;
    struct chunk *next;
};



int main(int argc, char *argv[]) {
    void *entry = mmap(NULL, 320, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);


    struct heap_data heap; 
    heap.start = entry;
    heap.avail_mem = 320;

    printf("%p\n", entry);

    struct chunk *c1;
    c1->size = 32;
    c1->in_use = true;
    c1->next = NULL;

    c1 = ((struct chunk *) entry) + 1;

    printf("%p\n", c1);
}


// void *heap_alloc(uint32_t size) {

// }

// void heap_free(void *ptr) {
    
// }
