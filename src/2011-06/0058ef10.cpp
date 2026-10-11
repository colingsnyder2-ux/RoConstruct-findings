// from server: 74% by atomic.potato
struct S {
    char pad0[0x68];
    int* begin;
    int* end;
    int f(int);
};

extern "C" int* __cdecl sub_58e800(void*, int);

int S::f(int a) {
    int* p = sub_58e800(this, a);
    int v = *p;
    if (v < 0) return 0;
    int n = (int)((end - begin) >> 2);
    if ((unsigned)v >= (unsigned)n) return 0;
    return begin[v];
}
