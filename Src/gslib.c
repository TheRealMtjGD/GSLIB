#include <stdio.h>
#include <string.h>

void libDescription(char *module) {
    printf("%s: stable module\n", module);
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        libDescription(argv[1]);
    } else {
        libDescription("stdlib.gsh");
        libDescription("math");
        libDescription("iostreams.gsh");
        libDescription("gdgl");
    }
}