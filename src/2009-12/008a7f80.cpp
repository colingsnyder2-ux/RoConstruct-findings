// roc 2009-12 008a7f80  unit: CXTPDockingPaneBase  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a7f80
//
// 008a7f80  8b5110               mov edx, dword ptr [ecx + 0x10]
// 008a7f83  8b442404             mov eax, dword ptr [esp + 4]
// 008a7f87  8910                 mov dword ptr [eax], edx
// 008a7f89  83410cff             add dword ptr [ecx + 0xc], -1
// 008a7f8d  894110               mov dword ptr [ecx + 0x10], eax
// 008a7f90  7505                 jne 0x8a7f97
// 008a7f92  e8b909f9ff           call 0x838950
// 008a7f97  c20400               ret 4
// copied from an identical function in another client (function ?Insert@CXTPDockingPaneBase@ns_ROCX000046@@QAEXPAX@Z)

namespace ns_ROCX000046 {
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
