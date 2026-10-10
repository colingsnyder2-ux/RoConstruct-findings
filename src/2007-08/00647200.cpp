// from server: 57% by colin
struct CXTPCommandBar {
    char pad0[0xd0];
    unsigned int m_dwStyle;
    char pad1[0xe4 - 0xd4];
    unsigned int m_dwFlags;
    char pad2[0xfc - 0xe8];
    CXTPCommandBar* m_pParent;
    char pad3[0x10c - 0x100];
    char m_arr1[0x118 - 0x10c];
    int m_nCount1;
    char pad4[0x128 - 0x11c];
    char m_arr2[0x134 - 0x128];
    int m_nCount2;

    void Refresh();
};

struct CXTPCommandBarControl {
    char pad0[0xd0];
    unsigned int m_dwStyle;
};

extern "C" int __stdcall sub_634A60(void* p, void* a, void* b);
extern "C" int __stdcall sub_643BF0();
extern "C" int __stdcall sub_644710();
extern "C" int __stdcall sub_644720(int n);

void CXTPCommandBar::Refresh() {
    int changed = 0;
    CXTPCommandBar* pThis = this;
    int n = sub_643BF0();
    if (n != 0)
        return;
    if (sub_644710() <= 0)
        return;
    int i = 0;
    do {
        CXTPCommandBarControl* pCtrl = (CXTPCommandBarControl*)sub_644720(i);
        if (pCtrl != 0 && *(CXTPCommandBar**)&pCtrl->pad0[0xfc - 0xd0] == pThis) {
            if (m_nCount1 > 0) {
                int local;
                int r = sub_634A60(&m_arr1[0], &local, (void*)n);
                unsigned int oldStyle = pCtrl->m_dwStyle;
                unsigned int newStyle;
                if (r == 0)
                    newStyle = oldStyle | 0x40;
                else
                    newStyle = oldStyle & ~0x40;
                ((void (__thiscall*)(CXTPCommandBarControl*, unsigned int))*(void**)(*(int*)pCtrl + 0x94))(pCtrl, newStyle);
                if (oldStyle != pCtrl->m_dwStyle)
                    changed = 1;
            }
            if (m_nCount2 > 0) {
                int local;
                int r = sub_634A60(&m_arr2[0], &local, (void*)n);
                unsigned int oldStyle = pCtrl->m_dwStyle;
                unsigned int newStyle;
                if (r == 0)
                    newStyle = oldStyle | 0x40;
                else
                    newStyle = oldStyle & ~0x40;
                ((void (__thiscall*)(CXTPCommandBarControl*, unsigned int))*(void**)(*(int*)pCtrl + 0x94))(pCtrl, newStyle);
                if (oldStyle != pCtrl->m_dwStyle)
                    changed = 1;
            }
        }
        i++;
    } while (i < sub_644710());
    if (changed)
        m_dwFlags |= 1;
}
