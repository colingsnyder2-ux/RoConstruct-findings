// from server: 79% by atomic.potato
struct S {
    char pad0[0x68];
    int* begin;
    int* end;
    int f(int);
};

extern "C" int* __stdcall sub_5c6330(int);

int S::f(int a) {
    int* p = sub_5c6330(a);
    int idx = *p;
    if (idx < 0) return 0;
    int n = (int)(end - begin);
    if ((unsigned)idx >= (unsigned)n) return 0;
    return begin[idx];
}
