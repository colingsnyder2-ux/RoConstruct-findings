// from server: 100% by colin
// roc 2007-08 006f5860  unit: CXTPControlCustom  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5860
//
// 006f5860  837c240402           cmp dword ptr [esp + 4], 2
// 006f5865  750e                 jne 0x6f5875
// 006f5867  83b97001000000       cmp dword ptr [ecx + 0x170], 0
// 006f586e  7405                 je 0x6f5875
// 006f5870  e82bffffff           call 0x6f57a0
// 006f5875  c20400               ret 4

struct CXTPControlCustom {
    unsigned char m_reserved[0x170];
    int m_nState;
    void Update();
    void SetActive(int nType);
};

void CXTPControlCustom::SetActive(int nType) {
    if (nType == 2 && m_nState != 0) {
        Update();
    }
}
