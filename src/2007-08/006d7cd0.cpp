// from server: 100% by colin
// roc 2007-08 006d7cd0  unit: CXTPDockingPaneBase  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d7cd0
//
// 006d7cd0  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006d7cd3  8b442404             mov eax, dword ptr [esp + 4]
// 006d7cd7  8910                 mov dword ptr [eax], edx
// 006d7cd9  83410cff             add dword ptr [ecx + 0xc], -1
// 006d7cdd  894110               mov dword ptr [ecx + 0x10], eax
// 006d7ce0  7505                 jne 0x6d7ce7
// 006d7ce2  e8b9ffffff           call 0x6d7ca0
// 006d7ce7  c20400               ret 4

struct CXTPDockingPaneBase {
    char pad[0xc];
    int m_count;
    void* m_head;
    void Insert(void* node);
    void RemoveAll();
};

void CXTPDockingPaneBase::Insert(void* node) {
    *(void**)node = m_head;
    m_head = node;
    if (--m_count == 0)
        RemoveAll();
}
