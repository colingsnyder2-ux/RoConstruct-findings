// from server: 90% by colin
struct S_0045bde0 {
    char pad[0xa4];
    void* m_a4;
    char pad2[4];
    void* m_ac;
    void f();
};

extern "C" void __stdcall sub_006a067a(void*);
extern "C" void __stdcall sub_0047c3e0();
extern "C" void __stdcall sub_0047bec0();

void* g_96eff4;

void S_0045bde0::f()
{
    void* p = m_a4;
    if (p != 0 && g_96eff4 != p) {
        (*(void (__thiscall**)(void*))(*(int*)p + 0x98))(p);
        g_96eff4 = p;
    }
    void* q = m_ac;
    if (q != 0) {
        sub_0047c3e0();
        void* r = m_ac;
        if (r != 0) {
            sub_0047bec0();
            sub_006a067a(r);
        }
        m_ac = 0;
    }
    void* s = m_a4;
    if (s != 0) {
        (*(void (__thiscall**)(void*, int))(*(int*)s + 0x9c))(s, 1);
        m_a4 = 0;
    }
}
