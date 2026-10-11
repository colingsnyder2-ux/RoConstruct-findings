// from server: 23% by atomic.potato
extern "C" void __cdecl G1_func_0086d690(void*);
extern "C" void __cdecl G1_func_007f3ddc(void*);
extern "C" void __cdecl G1_func_007f43e2(void*);
extern "C" void __cdecl G1_func_0086df60(void*);

struct S {
    void* m_p0;
    char pad1[0x1c];
    void* m_p20;
    void* m_p24;
    char pad2[0x4];
    char m_sub28[0x8];
    void f();
};

void S::f()
{
    m_p0 = (void*)0xa0053c;
    G1_func_0086df60(this);
    if (m_p20) {
        G1_func_007f3ddc(m_p20);
    }
    if (m_p24) {
        G1_func_007f3ddc(m_p24);
    }
    G1_func_0086d690(m_sub28);
    G1_func_007f43e2(this);
}
