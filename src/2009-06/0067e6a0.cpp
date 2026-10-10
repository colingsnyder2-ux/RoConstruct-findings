// from server: 76% by why2
struct S_func_0067e6a0 {
    char pad0[0xb8];
    void *m_ptr;
    void f();
};

void S_func_0067e6a0::f()
{
    void **p = (void **)m_ptr;
    void **vtable = (void **)*p;
    void (*fn)() = (void (*)())vtable[2];
    fn();
}
