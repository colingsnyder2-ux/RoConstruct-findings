// from server: 74% by atomic.potato
struct S_func_005e9f60 {
    char pad0[0x38];
    void f(void** out);
};

struct S_func_00645820 {
    char pad0[4];
    int m_x;
    void f(void* a1);
};

struct S_func_0066f550 {
    void f(void* a1);
};

struct S {
    char pad0[8];
    S_func_0066f550* m_p8;
    char pad1[0x38 - 0xc];
    S_func_005e9f60 m_38;
    void f(void* a1);
    virtual int v0();
    virtual int v1();
};

void S::f(void* a1)
{
    void* local;
    m_38.f(&local);
    S_func_00645820* p = (S_func_00645820*)local;
    if (p->m_x != 0) {
        int r = ((int (__thiscall*)(void*))((*(void***)p)[1]))(p);
        int r2 = v1();
        if (r > r2) {
            m_p8->f(p);
        }
        p->f(this);
    }
}
