
int
main(int argc, char **argv)
{
    int i = 777;
    int *p = &i;
    int** pp = &p;
    int*** ppp = &pp;
    int*** ppp2;

    ppp2 = ppp;
    printf("%d\n", ***ppp2);
    return 0;
}

static int
printf(char *s, ...)
{
    return 1;
}
