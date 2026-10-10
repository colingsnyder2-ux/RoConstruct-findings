// from server: 70% by colin
extern "C" void* __cdecl malloc(unsigned int size);
extern "C" void __cdecl memset(void* dest, int c, unsigned int count);

struct S {
    void* f(int a, int b, int c, int d);
};

void* S::f(int a, int b, int c, int d) {
    char buf[0x26c];
    unsigned int sz;
    void* p;
    int (*fn)(void*, int, int, int);

    if (a == 2) {
        sz = 0x120;
    } else if (a == 1) {
        sz = 0x26c;
    } else {
        return 0;
    }

    if (b != 0) {
        fn = (int (*)(void*, int, int, int))b;
        *(int*)(buf + 0x248) = d;
        p = (void*)fn(buf, c, 0, 0);
    } else {
        p = malloc(sz);
    }

    if (p != 0) {
        memset(p, 0, sz);
    }

    return p;
}
