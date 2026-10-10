// from server: 73% by colin
struct CXTPPopupToolBar {
    char pad0[0x174];
    void* m_field174;
    char pad178[0x1a4 - 0x178];
    int m_field1a4;
    int m_field1a8;
    int m_field1ac;
    void method_645a70(int, int);
    void method_694e50();

    void method_679900();
};

struct S_73836a {
    char pad0[0x28];
    int m_field28;
    char pad2c[0x40 - 0x2c];
    int m_field40;
};

extern S_73836a* g_8c9314;

S_73836a* __fastcall get_73836a(S_73836a* self, int);

void __stdcall sub_62ff20();

void CXTPPopupToolBar::method_679900()
{
    if (m_field1a8 != 0)
        return;

    if (m_field1a4 != 1)
        return;

    if (m_field174 != 0)
        method_694e50();

    m_field1ac = 1;
    m_field1a8 = 1;
    method_645a70(0, -1);

    void** vtbl = *(void***)this;
    void (__thiscall *fn1)(void*, int, int) = (void (__thiscall *)(void*, int, int))vtbl[0x148 / 4];
    fn1(this, 0, -1);

    void (__thiscall *fn2)(void*) = (void (__thiscall *)(void*))vtbl[0x17c / 4];
    fn2(this);

    S_73836a* p = get_73836a(g_8c9314, 0x632280);
    if (p == 0)
    {
        sub_62ff20();
        return;
    }
    p->m_field28 = 1;

    S_73836a* q = get_73836a(g_8c9314, 0x632280);
    if (q == 0)
    {
        sub_62ff20();
        return;
    }
    q->m_field40 = 1;
}
