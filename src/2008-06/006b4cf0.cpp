// from server: 100% by Cezant64gamejr
// roc 2008-06 006b4cf0  unit: CXTPCommandBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4cf0
//
// 006b4cf0  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 006b4cf6  c1e816               shr eax, 0x16
// 006b4cf9  83e001               and eax, 1
// 006b4cfc  c3                   ret 

struct CXTPCommandBar {
    char pad0[240];
    unsigned int m_flag;

    int f();
};

int CXTPCommandBar::f() {
    return (m_flag >> 22) & 1;
}
