// from server: 100% by colin
// roc 2007-08 00639db0  unit: CRobloxControlColorSelector  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639db0
//
// 00639db0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 00639db6  85c0                 test eax, eax
// 00639db8  7407                 je 0x639dc1
// 00639dba  8388e400000001       or dword ptr [eax + 0xe4], 1
// 00639dc1  c3                   ret 

struct InnerColorSelector {
    char pad[0xe4];
    unsigned int flags;
};

struct CRobloxControlColorSelector {
    char pad[0xfc];
    InnerColorSelector* m_pInner;
    void MarkDirty();
};

void CRobloxControlColorSelector::MarkDirty() {
    InnerColorSelector* p = m_pInner;
    if (p) {
        p->flags |= 1;
    }
}
