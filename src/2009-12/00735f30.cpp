// from server: 42% by atomic.potato
struct S {
    char pad[0x10];
    void *field10;
    void *field14;
    void f(int a, int *b);
};

void S::f(int a, int *b)
{
    if (a != 0) {
        void *p = field14;
        void (*fn)(void *, int) = (void (*)(void *, int))field10;
        fn((char *)p + (a - 0x1c), *b);
    } else {
        void *p = field14;
        void (*fn)(void *, int) = (void (*)(void *, int))field10;
        fn((char *)p + 0, *b);
    }
}
