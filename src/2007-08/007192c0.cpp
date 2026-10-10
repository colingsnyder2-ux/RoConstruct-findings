// from server: 86% by colin
struct CXTPRibbonBar {
    char pad[0x58];
    int m_n58;
    int m_n5c;
    char pad2[0x18];
    int m_n78;
    int sub_719270();
    int func();
};

extern "C" int __cdecl sub_6a7a50();

int CXTPRibbonBar::func() {
    if (m_n5c != m_n58) {
        return m_n78;
    }
    int a = sub_6a7a50();
    int b = sub_719270();
    if (a == b && m_n78 != 0) {
        return 1;
    }
    return 0;
}
