
int
main(int argc, char **argv)
{
    printf("%d;%d;%d\n", 1 * 1, 2 * 2, 3 * 5);
    return 0;
}

static int
printf(char *s, ...)
{
    return 1;
}