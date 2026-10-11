// from server: 81% by atomic.potato
struct S {
    char pad0[0x68];
    int* begin;
    int* end;
    int get(int);
};

extern "C" int* __cdecl sub_5c9b00(int);

int S::get(int a) {
    int* p = sub_5c9b00(a);
    int v = *p;
    if (v < 0) return 0;
    if ((unsigned)v >= (unsigned)((end - begin) >> 2)) return 0;
    return begin[v];
}
