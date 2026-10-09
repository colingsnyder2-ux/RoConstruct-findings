// roc 2008-06 00760970  unit: CXTPDockingPaneSplitterContainer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00760970
//
// 00760970  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00760973  8b442404             mov eax, dword ptr [esp + 4]
// 00760977  8910                 mov dword ptr [eax], edx
// 00760979  83410cff             add dword ptr [ecx + 0xc], -1
// 0076097d  894110               mov dword ptr [ecx + 0x10], eax
// 00760980  7505                 jne 0x760987
// 00760982  e8a976cdff           call 0x438030
// 00760987  c20400               ret 4
// copied from an identical function in another client (function ?Insert@CXTPDockingPaneBase@ns_ROCX000051@@QAEXPAX@Z)

namespace ns_ROCX000051 {
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
