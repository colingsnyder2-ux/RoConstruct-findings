// roc 2009-06 007e1670  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e1670
//
// 007e1670  8b5110               mov edx, dword ptr [ecx + 0x10]
// 007e1673  8b442404             mov eax, dword ptr [esp + 4]
// 007e1677  8910                 mov dword ptr [eax], edx
// 007e1679  83410cff             add dword ptr [ecx + 0xc], -1
// 007e167d  894110               mov dword ptr [ecx + 0x10], eax
// 007e1680  7505                 jne 0x7e1687
// 007e1682  e8b9ffffff           call 0x7e1640
// 007e1687  c20400               ret 4
// copied from an identical function in another client (function ?Insert@CXTPDockingPaneBase@ns_ROCX000038@@QAEXPAX@Z)

namespace ns_ROCX000038 {
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
