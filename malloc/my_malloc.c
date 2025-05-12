#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/mman.h>

int main(int argc, char *argv[]) {
    void *start = mmap(NULL, getpagesize(), PROT_READ | PROT_WRITE, MAP_PRIVATE, -1, 0);
}
