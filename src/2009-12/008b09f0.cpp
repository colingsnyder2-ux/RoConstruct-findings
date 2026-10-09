// roc 2009-12 008b09f0  unit: CXTPDockingPane  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b09f0
//
// 008b09f0  83791804             cmp dword ptr [ecx + 0x18], 4
// 008b09f4  7514                 jne 0x8b0a0a
// 008b09f6  e845feffff           call 0x8b0840
// 008b09fb  83b8e800000000       cmp dword ptr [eax + 0xe8], 0
// 008b0a02  7406                 je 0x8b0a0a
// 008b0a04  b801000000           mov eax, 1
// 008b0a09  c3                   ret 
// 008b0a0a  33c0                 xor eax, eax
// 008b0a0c  c3                   ret 
// copied from an identical function in another client (function ?IsActive@CXTPDockingPane@ns_ROCX000002@@QAEHXZ)

namespace ns_ROCX000002 {
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
