#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/mman.h>


struct heap_data {
    struct chunk *start; 
    uint32_t avail_mem;
}

struct chunk {
    uint32_t size;
    bool in_use;
    struct chunk *next;
}



int main(int argc, char *argv[]) {
    void *entry = mmap(NULL, getpagesize(), PROT_READ | PROT_WRITE, MAP_PRIVATE, -1, 0);

    struct heap_data heap; 
    heap.start = entry;
    heap.size = getpagesize();
}


void *heap_alloc(uint32_t size) {

}

void heap_free(void *ptr) {
    
}
