// from server: 75% by atomic.potato
struct S
{
    char pad[0x64];
    void *field64;

    int f();
};

typedef int (__thiscall *FunctionType)(void *);

int S::f()
{
    void *p = field64;
    if (p != 0)
    {
        void *q = *(void **)((char *)p + 0xa54);
        if (q != 0)
            return ((FunctionType)0x41acb0)(q);
    }
    return 0;
}
