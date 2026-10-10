// from server: 93% by colin
struct CXTThemeManagerStyle {
    void *m_vtbl;
    int m_field4;
    char pad8[4];
    void *m_fieldC;
    void destroy();
};

extern "C" void *__stdcall sub_691940(void *p);
extern "C" void __stdcall sub_738B32(void *p);

void CXTThemeManagerStyle::destroy()
{
    m_vtbl = (void *)0x7d0880;
    void *p = sub_691940(this);
    sub_738B32((char *)p + 8);
    if (m_field4 != 0) {
        void *q = m_fieldC;
        if (q != 0) {
            void **vt = *(void ***)q;
            void (__thiscall *fn)(void *, int) = (void (__thiscall *)(void *, int))vt[1];
            fn(q, 1);
            m_fieldC = 0;
        }
    }
}
