// roc 2009-06 007d5eb0  unit: CXTPDockingPane  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d5eb0
//
// 007d5eb0  83791804             cmp dword ptr [ecx + 0x18], 4
// 007d5eb4  7514                 jne 0x7d5eca
// 007d5eb6  e845feffff           call 0x7d5d00
// 007d5ebb  83b8e800000000       cmp dword ptr [eax + 0xe8], 0
// 007d5ec2  7406                 je 0x7d5eca
// 007d5ec4  b801000000           mov eax, 1
// 007d5ec9  c3                   ret 
// 007d5eca  33c0                 xor eax, eax
// 007d5ecc  c3                   ret 
// copied from an identical function in another client (function ?IsActive@CXTPDockingPane@ns_ROCX000071@@QAEHXZ)

namespace ns_ROCX000071 {
struct CObj {
    char pad[0xe8];
    int m_flag;
};

struct CXTPDockingPane {
    int m_unused[6];
    int m_kind;
    CObj* GetRelated();

    int IsActive();
};

int CXTPDockingPane::IsActive() {
    if (m_kind == 4) {
        CObj* p = GetRelated();
        if (p->m_flag != 0)
            return 1;
    }
    return 0;
}
}
