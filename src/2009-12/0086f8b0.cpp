// roc 2009-12 0086f8b0  unit: CXTPDockingPaneAutoHidePanel  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f8b0
//
// 0086f8b0  56                   push esi
// 0086f8b1  8bf1                 mov esi, ecx
// 0086f8b3  8d4e78               lea ecx, [esi + 0x78]
// 0086f8b6  ff15c0de9800         call dword ptr [0x98dec0]
// 0086f8bc  8bce                 mov ecx, esi
// 0086f8be  5e                   pop esi
// 0086f8bf  e9cc48f8ff           jmp 0x7f4190
// copied from an identical function in another client (function ?Destruct@CXTPDockingPaneAutoHidePanel@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
struct CXTPDockingPaneAutoHidePanel
{
    char pad[0x78];
    void* field_78;
    void Destruct();
};

extern "C" void (__fastcall *g_77ddbc)(void*);
extern "C" void __fastcall sub_630412(CXTPDockingPaneAutoHidePanel*);

void CXTPDockingPaneAutoHidePanel::Destruct()
{
    g_77ddbc(&field_78);
    sub_630412(this);
}
}
