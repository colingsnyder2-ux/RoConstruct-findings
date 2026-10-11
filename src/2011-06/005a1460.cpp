// from server: 77% by atomic.potato
struct S {
    char pad[0x68];
    int* begin;
    int* end;
    int f(int);
};

struct T {
    int* g(int);
};

int S::f(int a)
{
    T* t = (T*)this;
    int* p = t->g(a);
    int idx = *p;
    if (idx < 0)
        return 0;
    if ((unsigned)idx >= (unsigned)((end - begin) >> 2))
        return 0;
    return begin[idx];
}
