// from server: 79% by atomic.potato
struct S {
    char pad[0x68];
    int* begin;
    int* end;
    int* get(int idx);
    int f(int idx);
};

int S::f(int idx) {
    int v = *get(idx);
    if (v < 0)
        return 0;
    int count = (int)(end - begin);
    if ((unsigned)v >= (unsigned)count)
        return 0;
    return begin[v];
}
