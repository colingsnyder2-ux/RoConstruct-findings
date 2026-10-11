// from server: 93% by atomic.potato
extern "C" void __stdcall G1_func_0098dec0(void*);
extern "C" void __cdecl G1_func_007f385a(void*);

struct S_func_00452e30 {
    char pad[0xc];
    void* m_begin;
    void* m_end;
    void* m_cap;
    void f();
};

void S_func_00452e30::f()
{
    if (m_begin) {
        char* p = (char*)m_begin;
        char* e = (char*)m_end;
        while (p != e) {
            G1_func_0098dec0(p + 8);
            p += 0xc;
        }
        G1_func_007f385a(m_begin);
    }
    m_begin = 0;
    m_end = 0;
    m_cap = 0;
}
