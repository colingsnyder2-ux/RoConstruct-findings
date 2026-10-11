// from server: 70% by atomic.potato
struct VTable_008e9340
{
    void (__thiscall *m_fn)(void*, void*, void*, void*);
};

struct Object_008e9340
{
    VTable_008e9340* m_vtable;
};

extern "C" Object_008e9340* func_00804590(void*);

struct S_func_008e9310
{
    char pad[256];
    void* m_p;
    int f(void*, void*);
};

int S_func_008e9310::f(void* a, void* b)
{
    Object_008e9340* p = func_00804590(m_p);
    p->m_vtable->m_fn(p, b, this, 0);
    return (int)b;
}
