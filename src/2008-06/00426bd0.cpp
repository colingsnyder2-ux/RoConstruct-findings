// from server: 100% by tester
// roc 2008-06 00426bd0  unit: CSelectionTreeCtrl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00426bd0
//
// 00426bd0  8b8924010000         mov ecx, dword ptr [ecx + 0x124]
// 00426bd6  85c9                 test ecx, ecx
// 00426bd8  7405                 je 0x426bdf
// 00426bda  e9d1e7feff           jmp 0x4153b0
// 00426bdf  33c0                 xor eax, eax
// 00426be1  c3                   ret 

struct CSelectionTreeCtrl {
    char pad[0x124];
    void* m_ptr;
    int GetSelected();
};

extern int __fastcall sub_410d40(void* p);

int CSelectionTreeCtrl::GetSelected()
{
    if (m_ptr)
        return sub_410d40(m_ptr);
    return 0;
}
