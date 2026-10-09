// roc 2010-06 00864ac0  unit: CXTPDockingPane  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00864ac0
//
// 00864ac0  83791804             cmp dword ptr [ecx + 0x18], 4
// 00864ac4  7514                 jne 0x864ada
// 00864ac6  e845feffff           call 0x864910
// 00864acb  83b8e800000000       cmp dword ptr [eax + 0xe8], 0
// 00864ad2  7406                 je 0x864ada
// 00864ad4  b801000000           mov eax, 1
// 00864ad9  c3                   ret 
// 00864ada  33c0                 xor eax, eax
// 00864adc  c3                   ret 
// copied from an identical function in another client (function ?IsActive@CXTPDockingPane@ns_ROCX00007b@@QAEHXZ)

namespace ns_ROCX00007b {
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
