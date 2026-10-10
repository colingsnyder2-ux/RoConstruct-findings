// from server: 76% by why2
struct S_func_00670040 {
    char pad[0xe0];
    void* m_p;
    void f();
};

void S_func_00670040::f()
{
    void** p = (void**)m_p;
    void** vtable = (void**)*p;
    typedef void (__thiscall *Fn)();
    Fn fn = (Fn)vtable[4];
    fn();
}
