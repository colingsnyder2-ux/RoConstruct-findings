// roc 2011-06 008e60d0  unit: CXTColorHex  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e60d0
//
// 008e60d0  8b5110               mov edx, dword ptr [ecx + 0x10]
// 008e60d3  8b442404             mov eax, dword ptr [esp + 4]
// 008e60d7  8910                 mov dword ptr [eax], edx
// 008e60d9  83410cff             add dword ptr [ecx + 0xc], -1
// 008e60dd  894110               mov dword ptr [ecx + 0x10], eax
// 008e60e0  7505                 jne 0x8e60e7
// 008e60e2  e839e0b5ff           call 0x444120
// 008e60e7  c20400               ret 4
// copied from an identical function in another client (function ?Insert@CXTPDockingPaneBase@ns_ROCX000005@@QAEXPAX@Z)

namespace ns_ROCX000005 {
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
}
