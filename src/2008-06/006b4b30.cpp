// from server: 88% by colin
struct CXTPControl {
    void SetChecked(int);
};

struct CXTPCommandBar {
    char pad[0x18];
    int m_bVar18;
    char pad2[0x28 - 0x1c];
    CXTPControl* m_pControl28;
    int m_nVar2c;
    void SetChecked(int);
};

void CXTPCommandBar::SetChecked(int n) {
    m_bVar18 = 1;
    CXTPControl* p = m_pControl28;
    if (p) {
        if (*(int*)((char*)p + 0x15c) != 0) {
            int v = (n != 0) ? 1 : 0;
            void (__thiscall *fn)(CXTPControl*, int);
            fn = *(void (__thiscall **)(CXTPControl*, int))(*(int*)p + 0x68);
            fn(p, v);
        } else {
            void (__thiscall *fn)(CXTPControl*, int);
            fn = *(void (__thiscall **)(CXTPControl*, int))(*(int*)p + 0x68);
            fn(p, n);
            if (n == 0 && m_nVar2c == 0) {
                m_pControl28->SetChecked(0);
            }
        }
    }
}
