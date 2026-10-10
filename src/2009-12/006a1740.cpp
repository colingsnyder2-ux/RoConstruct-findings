// from server: 88% by atomic.potato
struct S
{
    int f();
};

typedef int (__thiscall *TypeInfoEqual)(void *, const void *);

extern "C" TypeInfoEqual g_type_info_equal;

int S::f()
{
    void *p = *(void **)this;
    void *q = *(void **)((char *)p + 8);
    return g_type_info_equal((void *)0x00b2b840, q);
}
