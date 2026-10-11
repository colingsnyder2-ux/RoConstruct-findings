// from server: 81% by atomic.potato
struct S {
    char pad[0x68];
    int* begin;
    int* end;
    int f(int);
};

extern "C" int* __cdecl sub_5c1a30(int);

int S::f(int a) {
    int* p = sub_5c1a30(a);
    int v = *p;
    if (v < 0) return 0;
    if ((unsigned)v >= (unsigned)((end - begin) >> 2)) return 0;
    return begin[v];
}
