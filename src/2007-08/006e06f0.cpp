// from server: 100% by colin
// roc 2007-08 006e06f0  unit: CXTPDockingPane  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e06f0
//
// 006e06f0  83791804             cmp dword ptr [ecx + 0x18], 4
// 006e06f4  7514                 jne 0x6e070a
// 006e06f6  e845feffff           call 0x6e0540
// 006e06fb  83b8e800000000       cmp dword ptr [eax + 0xe8], 0
// 006e0702  7406                 je 0x6e070a
// 006e0704  b801000000           mov eax, 1
// 006e0709  c3                   ret 
// 006e070a  33c0                 xor eax, eax
// 006e070c  c3                   ret 

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
