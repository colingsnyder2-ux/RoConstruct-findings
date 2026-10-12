// from server: 96% by king_originala
struct S {
    char reserved0[0x14];
    char** first;
    char reserved1[0x0C];
    char** current;
    char reserved2[0x0C];
    int* count;
    char reserved3[0x14];
    char* buffer;
    int length;
    char reserved4[4];
    volatile unsigned flags;

    void f();
};

void S::f()
{
    if ((flags >> 3) & 1) {
        char* begin = buffer;
        char* end = begin + length;
        *first = begin;
        *current = begin;
        *count = end - begin;
    } else {
        *first = 0;
        *current = 0;
        *count = 0;
    }
}
