// from server: 100% by colin
// roc 2007-08 00639f40  unit: CRobloxControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639f40
//
// 00639f40  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 00639f46  85c0                 test eax, eax
// 00639f48  740c                 je 0x639f56
// 00639f4a  83b8fc00000005       cmp dword ptr [eax + 0xfc], 5
// 00639f51  7503                 jne 0x639f56
// 00639f53  33c0                 xor eax, eax
// 00639f55  c3                   ret 
// 00639f56  b801000000           mov eax, 1
// 00639f5b  c3                   ret 

struct CRobloxControlColorSelector {
    char pad0[0xfc];
    CRobloxControlColorSelector* m_pOther;
    int f();
};

int CRobloxControlColorSelector::f()
{
    CRobloxControlColorSelector* p = m_pOther;
    if (p != 0 && p->m_pOther == (CRobloxControlColorSelector*)5)
        return 0;
    return 1;
}
