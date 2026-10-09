// roc 2007-03 006dff20  unit: seg_006d0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dff20
//
// 006dff20  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006dff23  8b442404             mov eax, dword ptr [esp + 4]
// 006dff27  8910                 mov dword ptr [eax], edx
// 006dff29  83410cff             add dword ptr [ecx + 0xc], -1
// 006dff2d  894110               mov dword ptr [ecx + 0x10], eax
// 006dff30  7505                 jne 0x6dff37
// 006dff32  e8b9ffffff           call 0x6dfef0
// 006dff37  c20400               ret 4
// copied from an identical function in another client (function ?Insert@CXTPDockingPaneBase@ns_ROCX00004c@@QAEXPAX@Z)

namespace ns_ROCX00004c {
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
