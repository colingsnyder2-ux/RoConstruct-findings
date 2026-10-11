// from server: 76% by atomic.potato
struct S {
    char pad[0x68];
    int* begin;
    int* end;
    int f(int);
};

extern int* G1_func_005a17c0(S*, int);

int S::f(int a)
{
    int* p = G1_func_005a17c0(this, a);
    int idx = *p;
    if (idx < 0)
        return 0;
    if ((unsigned)idx >= (unsigned)((end - begin)))
        return 0;
    return begin[idx];
}
