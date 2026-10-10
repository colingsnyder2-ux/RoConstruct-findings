// from server: 87% by atomic.potato
struct S_func_00804730
{
    void* f();
};

typedef void* (__thiscall *T_func_008044d0)(S_func_00804730*);
extern "C" T_func_008044d0 func_008044d0;

void* S_func_00804730::f()
{
    void* p = func_008044d0(this);
    if (!p)
        return 0;
    void** vtable = *(void***)p;
    return ((void* (__thiscall *)(void*))vtable[25])(p);
}
