#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    printf("Program begins...\n");

    int x = -1;

#ifdef TEST_FLAG
    printf("[%s][%d] TEST_FLAG is defined\n", __func__, __LINE__);
#else
    printf("[%s][%d] TEST_FLAG is NOT defined\n", __func__, __LINE__);
#endif

#ifdef TEST_FLAG
    x++;
#else
    y++;
#endif

    return EXIT_SUCCESS;
}
