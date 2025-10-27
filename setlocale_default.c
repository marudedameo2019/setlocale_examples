#include <locale.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char argv[]) {
    char* loc = setlocale(LC_ALL, "");
    if (loc == NULL) {
        perror("");
        return EINVAL;
    }
    printf("現在のロケール: %s\n", loc);
    return EXIT_SUCCESS;
}

