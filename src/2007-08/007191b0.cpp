// from server: 86% by colin
struct CXTPRibbonGroupControlPopup {
    char pad[0xd0];
    unsigned int m_dwFlags;
    char pad2[0x158 - 0xd0 - 4];
    void* m_pPopup;
    char pad3[0x178 - 0x158 - 4];
    void* m_pOther;
    int IsEnabled(unsigned int mask);
};

int CXTPRibbonGroupControlPopup::IsEnabled(unsigned int mask) {
    void* p = m_pPopup;
    if (p != 0 && *(int*)((char*)p + 0x3c) == 0) {
        return 0;
    }
    unsigned int v = m_dwFlags & ~mask;
    if (v != 0) {
        void* q = m_pOther;
        if (q != 0 && *(int*)((char*)q + 0x78) == 0) {
            return 0;
        }
        return 1;
    }
    return 0;
}
