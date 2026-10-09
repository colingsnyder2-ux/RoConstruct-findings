// roc 2011-06 008c1f10  unit: CXTPDockingPane  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1f10
//
// 008c1f10  83791804             cmp dword ptr [ecx + 0x18], 4
// 008c1f14  7514                 jne 0x8c1f2a
// 008c1f16  e845feffff           call 0x8c1d60
// 008c1f1b  83b8e800000000       cmp dword ptr [eax + 0xe8], 0
// 008c1f22  7406                 je 0x8c1f2a
// 008c1f24  b801000000           mov eax, 1
// 008c1f29  c3                   ret 
// 008c1f2a  33c0                 xor eax, eax
// 008c1f2c  c3                   ret 
// copied from an identical function in another client (function ?IsActive@CXTPDockingPane@ns_ROCX000042@@QAEHXZ)

namespace ns_ROCX000042 {
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
