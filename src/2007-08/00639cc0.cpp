// from server: 100% by colin
// roc 2007-08 00639cc0  unit: CXTPControlComboBoxAutoCompleteWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639cc0
//
// 00639cc0  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 00639cc6  83f8ff               cmp eax, -1
// 00639cc9  750d                 jne 0x639cd8
// 00639ccb  8b8958010000         mov ecx, dword ptr [ecx + 0x158]
// 00639cd1  85c9                 test ecx, ecx
// 00639cd3  7403                 je 0x639cd8
// 00639cd5  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00639cd8  c3                   ret 

struct Sub_639cc0 {
    char pad[0x38];
    int m_val;
};

struct S_639cc0 {
    char pad0[0xa0];
    int m_a0;
    char pad1[0x158 - 0xa0 - 4];
    Sub_639cc0* m_p158;
    int f();
};

int S_639cc0::f()
{
    int r = m_a0;
    if (r == -1) {
        Sub_639cc0* p = m_p158;
        if (p != 0) {
            r = p->m_val;
        }
    }
    return r;
}
