#include <stdio.h>

int main(void)
{
    FILE *fb;
    fb = fopen("data/data.txt", "w");
    fprintf(fb, "hello!");
    fclose(fb);
    return 0;
}