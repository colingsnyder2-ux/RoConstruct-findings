// from server: 60% by atomic.potato
struct Inner {
    int get();
};

struct S {
    char pad0[0x68];
    int* begin;
    int* end;
    int f(int);
};

int S::f(int a) {
    int idx = Inner().get();
    if (idx < 0) return 0;
    if ((unsigned)idx >= (unsigned)((end - begin))) return 0;
    return begin[idx];
}
