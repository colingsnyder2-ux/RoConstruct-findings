// roc 2008-06 0075d660  unit: CXTPDockingPane  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d660
//
// 0075d660  83791804             cmp dword ptr [ecx + 0x18], 4
// 0075d664  7514                 jne 0x75d67a
// 0075d666  e835feffff           call 0x75d4a0
// 0075d66b  83b8e800000000       cmp dword ptr [eax + 0xe8], 0
// 0075d672  7406                 je 0x75d67a
// 0075d674  b801000000           mov eax, 1
// 0075d679  c3                   ret 
// 0075d67a  33c0                 xor eax, eax
// 0075d67c  c3                   ret 
// copied from an identical function in another client (function ?IsActive@CXTPDockingPane@ns_ROCX00008e@@QAEHXZ)

namespace ns_ROCX00008e {
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
