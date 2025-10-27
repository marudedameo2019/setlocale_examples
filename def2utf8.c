#include <locale.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <wchar.h>

#define BUFFSIZE 4096

int main(int argc, char argv[]) {
    char* loc = setlocale(LC_ALL, "");
    if (loc == NULL) {
        perror("");
        return EINVAL;
    }
    wchar_t buff[BUFFSIZE];
    while(fgetws(buff, BUFFSIZE, stdin) != NULL) {
        fflush(stdout);
        loc = setlocale(LC_ALL, "ja_JP.UTF-8");
        if (loc == NULL) {
            perror("");
            return EINVAL;
        }

        fputws(buff, stdout);

        fflush(stdout);
        loc = setlocale(LC_ALL, "");
        if (loc == NULL) {
            perror("");
            return EINVAL;
        }
    }
    return EXIT_SUCCESS;
}
