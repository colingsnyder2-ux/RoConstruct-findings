// roc 2007-03 006c96c0  unit: seg_006c0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c96c0
//
// 006c96c0  83791804             cmp dword ptr [ecx + 0x18], 4
// 006c96c4  7514                 jne 0x6c96da
// 006c96c6  e855feffff           call 0x6c9520
// 006c96cb  83b8e800000000       cmp dword ptr [eax + 0xe8], 0
// 006c96d2  7406                 je 0x6c96da
// 006c96d4  b801000000           mov eax, 1
// 006c96d9  c3                   ret 
// 006c96da  33c0                 xor eax, eax
// 006c96dc  c3                   ret 
// copied from an identical function in another client (function ?IsActive@CXTPDockingPane@ns_ROCX000008@@QAEHXZ)

namespace ns_ROCX000008 {
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
