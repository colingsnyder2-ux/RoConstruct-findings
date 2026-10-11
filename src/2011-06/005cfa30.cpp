// from server: 64% by atomic.potato
struct Inner {
    int get();
};

struct S {
    char pad0[0x68];
    Inner* begin;
    Inner* end;
    int f(int idx);
};

int S::f(int idx) {
    int i = begin[idx].get();
    if (i < 0)
        return 0;
    if ((unsigned)i >= (unsigned)((end - begin)))
        return 0;
    return begin[i].get();
}
