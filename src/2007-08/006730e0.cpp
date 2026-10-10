// from server: 64% by colin
struct CXTPControlColorSelector {
    char pad0[0x9c];
    int m_nValue;
    char pad1[0x158 - 0xa0];
    void* m_pSomething;
    char pad2[0x168 - 0x15c];
    int m_nSomething;
    int m_nSomething2;
    int GetValue(int, int, int);
    void sub_63c1b0(int, int, int, int);
    int sub_672e50(int, int);
};

extern "C" int __stdcall sub_63a580(void*);

int CXTPControlColorSelector::GetValue(int a, int b, int c) {
    int result;
    int eax;
    eax = m_nValue;
    if (eax != -1) {
        if (m_pSomething != 0) {
            eax = sub_63a580(m_pSomething);
        }
    }
    if (eax == 0) {
        return 0;
    }
    if (a != 0) {
        result = m_nSomething;
    } else {
        result = sub_672e50(c, b);
    }
    if (result == -1) {
        return 0;
    }
    m_nSomething2 = result;
    if (a == 0) {
        sub_63c1b0(0, 0, a, 0);
        m_nSomething2 = -1;
        return 0;
    }
    (*(void (__thiscall**)(void*))((char*)this + 0x98))(this);
    m_nSomething2 = -1;
    return 0;
}
