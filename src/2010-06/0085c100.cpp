// roc 2010-06 0085c100  unit: CXTPDockingPaneBase  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085c100
//
// 0085c100  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0085c103  8b442404             mov eax, dword ptr [esp + 4]
// 0085c107  8910                 mov dword ptr [eax], edx
// 0085c109  83410cff             add dword ptr [ecx + 0xc], -1
// 0085c10d  894110               mov dword ptr [ecx + 0x10], eax
// 0085c110  7505                 jne 0x85c117
// 0085c112  e8b9ffffff           call 0x85c0d0
// 0085c117  c20400               ret 4
// copied from an identical function in another client (function ?Insert@CXTPDockingPaneBase@ns_ROCX000042@@QAEXPAX@Z)

namespace ns_ROCX000042 {
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
