// from server: 67% by atomic.potato
struct S
{
    unsigned char f();
};

unsigned char S::f()
{
    struct T
    {
        int (__thiscall **vtable)(T *);
    };

    T *p = *(T **)((char *)this + 12);
    int (__thiscall *fn)(T *) = p->vtable[1];
    int *result = (int *)fn((T *)((char *)p + 288));
    return (unsigned char)(result[81] == 2);
}
