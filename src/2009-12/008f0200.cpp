// from server: 82% by atomic.potato
struct S
{
    int f();
    int pad0[8];
};

int S::f()
{
    struct T
    {
        int pad[63];
        int v;
    };

    T* a = (T*)pad0[8];
    int* b = *(int**)a->v;
    return ((int (__thiscall *)(int*))(*(int***)b)[22])(b);
}
