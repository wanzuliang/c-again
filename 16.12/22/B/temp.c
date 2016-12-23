
#include <unistd.h>

int main(int argc, char const *argv[]) {
    // printf("%s\n", _XOPEN_VERSION);
    fchdir("fork.c");
    return 0;
}
