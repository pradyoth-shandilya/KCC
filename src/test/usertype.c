

struct s {
    int x;
    int y;
};

union u {
    int x;
    int y;
};

typedef char schar;
typedef short sshort;
typedef int sint;
typedef long slong;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef struct s struct_s;
typedef union u union_u;
typedef int ints8[8];
typedef int* intptr;
typedef int (char*)* msgfunc;
typedef sint sint2;

int
main(int argc, char **argv)
{
    sint i = 1;
    struct_s st;
    union_u un;
    ints8 ary;
    intptr ptr = &i;
    msgfunc myputs = puts;

    printf("%d", i);
    printf(";%d", f(2));
    printf(";%d;%d", fs(), (sint)fu());
    st.x = 3;
    printf(";%d", st.x);
    un.x = 4;
    printf(";%d", un.x);
    ary[1] = 5;
    printf(";%d", ary[1]);
    *ptr = 6;
    printf(";%d", *ptr);

    return 0;
}

int f(sint i) { return i; }

sint fs(void) { return (sint)1; }
uint fu(void) { return (uint)1; }

static int
printf(char *s, ...)
{
    return 1;
}

int puts(char * i){
    return i;
}