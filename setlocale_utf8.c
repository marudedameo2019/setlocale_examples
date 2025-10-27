#include <locale.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char argv[]) {
    char* loc = setlocale(LC_ALL, "ja_JP.UTF-8");
    if (loc == NULL) {
        perror("");
        return EINVAL;
    }
    printf("現在のロケール: %s\n", loc);
    return EXIT_SUCCESS;
}

