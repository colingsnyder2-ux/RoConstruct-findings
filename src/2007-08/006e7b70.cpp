// from server: 64% by colin
struct CXTPDockingPaneExplorerTheme {
    void RefreshMetrics();
    char pad[0x9c];
    void* m_pPane1;
    void* m_pPane2;
    char pad2[0x1e0 - 0xa4];
    char m_theme[0x100];
};

extern "C" void __stdcall sub_6e5eb0();
extern "C" void __stdcall sub_69ed50(void*, int);
extern "C" int __stdcall sub_69ec10();
extern "C" void __stdcall sub_702710(void*, int);
extern "C" void __stdcall sub_7009f0(void*, int);

void CXTPDockingPaneExplorerTheme::RefreshMetrics()
{
    sub_6e5eb0();
    sub_69ed50(m_theme, 0);
    if (sub_69ec10() != 0)
    {
        sub_702710(m_pPane2, 0);
        sub_7009f0(m_pPane2, 8);
        *(int*)((char*)m_pPane2 + 0x20) = 1;
        sub_702710(m_pPane1, 0);
        sub_7009f0(m_pPane1, 8);
        *(int*)((char*)m_pPane1 + 0x20) = 1;
    }
    else
    {
        sub_702710(m_pPane2, 6);
        *(int*)((char*)m_pPane2 + 0x20) = 0;
        sub_702710(m_pPane1, 5);
        *(int*)((char*)m_pPane1 + 0x20) = 0;
    }
}
