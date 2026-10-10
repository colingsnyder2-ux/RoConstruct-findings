// from server: 90% by atomic.potato
struct S
{
    int f();
};

typedef void *(__cdecl *Helper)(void *);
typedef int (__thiscall *TypeInfoEqual)(void *, const void *);

extern "C" void * __cdecl helper(void *);
extern TypeInfoEqual g_typeInfoEqual;
extern void *g_object;

int S::f()
{
    void *p = *(void **)((char *)*(void **)((char *)this + 0x0c) + 0x0a90);
    void *q = *(void **)((char *)p + 0x1b4);
    if (q)
    {
        q = helper(q);
        g_typeInfoEqual(g_object, q);
    }
    return 0;
}
