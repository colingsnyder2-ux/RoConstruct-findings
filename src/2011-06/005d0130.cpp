// from server: 73% by atomic.potato
struct Inner {
    int get(int);
};

struct S {
    char pad0[0x68];
    int* begin;
    int* end;
    int f(int);
};

int S::f(int a) {
    Inner* p = (Inner*)0;
    int idx = p->get(a);
    if (idx < 0)
        return 0;
    int count = (int)((end - begin));
    if ((unsigned)idx >= (unsigned)count)
        return 0;
    return begin[idx];
}
