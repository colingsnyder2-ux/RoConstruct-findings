// from server: 79% by atomic.potato
struct S {
    char pad[0x68];
    int* begin;
    int* end;
    int f(int);
};

extern "C" int* __stdcall sub_5c6b40(int);

int S::f(int a) {
    int* p = sub_5c6b40(a);
    int v = *p;
    if (v < 0) return 0;
    int n = (int)(((char*)end - (char*)begin) >> 2);
    if ((unsigned)v >= (unsigned)n) return 0;
    return begin[v];
}
