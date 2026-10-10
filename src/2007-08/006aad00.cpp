// from server: 74% by colin
struct CXTPRibbonBar {
    char pad0[0x244];
    int m_nField244;
    char pad1[0x18];
    int m_nField260;
    char pad2[0x4];
    int m_nField264;
    char pad3[0x20];
    int m_nField288;
    void CopyFrom(CXTPRibbonBar* other);
};

extern "C" void __stdcall sub_67A660(int);
extern "C" void __stdcall sub_67C5B0(int, int, int, int);

void CXTPRibbonBar::CopyFrom(CXTPRibbonBar* other)
{
    m_nField244 = other->m_nField244;
    m_nField288 = other->m_nField288;
    if (m_nField288 != 0)
    {
        int* p = (int*)m_nField264;
        int* vt = (int*)*(int*)((char*)p + 0x178);
        void (__stdcall *fn)(int) = (void (__stdcall *)(int))vt[8];
        fn(0);
    }
    sub_67A660(m_nField260);
    int count = *(int*)((char*)other->m_nField260 + 0x2c);
    for (int i = 0; i < count; i++)
    {
        int item;
        if (i >= 0 && i < *(int*)((char*)other->m_nField260 + 0x2c))
            item = *(int*)(*(int*)((char*)other->m_nField260 + 0x28) + i * 4);
        else
            item = 0;
        sub_67C5B0(m_nField260, item, -1, 0);
    }
}
