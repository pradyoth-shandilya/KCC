

int
main(int argc, char **argv)
{
    short i = -1;
    
    i <<= 1;
    printf("%hd", i);
    i <<= 13;
    printf(";%hd", i);
    i <<= 1;
    printf(";%hd", i);
    i <<= 1;
    printf(";%hd", i);

    return 0;
}

static int
printf(char *s, ...)
{
    return 1;
}
