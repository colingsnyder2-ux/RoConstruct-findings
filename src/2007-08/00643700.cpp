// from server: 65% by colin
// roc 2007-08 00643700  unit: CXTPCommandBar::CCommandBarCmdUI  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643700
//
// 00643700  8b442404             mov eax, dword ptr [esp + 4]
// 00643704  c7412c01000000       mov dword ptr [ecx + 0x2c], 1
// 0064370b  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 0064370e  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 00643714  7413                 je 0x643729
// 00643716  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 0064371c  c744240401000000     mov dword ptr [esp + 4], 1
// 00643724  e9676fffff           jmp 0x63a690
// 00643729  c20400               ret 4

struct CXTPCommandBarCmdUI {
    char pad[0x28];
    void* m_pCommandBar;
    int m_nCmdID;
    void SetCheck(int nCheck);
};

void CXTPCommandBarCmdUI::SetCheck(int nCheck) {
    m_nCmdID = 1;
    void* p = m_pCommandBar;
    if (*(int*)((char*)p + 0xa0) != nCheck) {
        *(int*)((char*)p + 0xa0) = nCheck;
        extern void __stdcall sub_63a690(void*, int);
        sub_63a690(p, 1);
    }
}
