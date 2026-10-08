// from server: 100% by colin
// roc 2007-08 00425720  unit: CSelectionTreeCtrl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00425720
//
// 00425720  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 00425726  85c9                 test ecx, ecx
// 00425728  7405                 je 0x42572f
// 0042572a  e911b6feff           jmp 0x410d40
// 0042572f  33c0                 xor eax, eax
// 00425731  c3                   ret 

struct CSelectionTreeCtrl {
    char pad[0xe4];
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
