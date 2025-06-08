#include <assert.h>
#include <stdio.h>
#include "cowboy.h"

int main() {
    assert(cowboy() == 7);
    printf("Tests are passing!");
    return 0;
}