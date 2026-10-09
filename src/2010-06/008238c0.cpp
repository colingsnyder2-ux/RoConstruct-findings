// roc 2010-06 008238c0  unit: CXTPDockingPaneAutoHidePanel  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008238c0
//
// 008238c0  56                   push esi
// 008238c1  8bf1                 mov esi, ecx
// 008238c3  8d4e78               lea ecx, [esi + 0x78]
// 008238c6  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008238cc  8bce                 mov ecx, esi
// 008238ce  5e                   pop esi
// 008238cf  e9fc49f8ff           jmp 0x7a82d0
// copied from an identical function in another client (function ?Destruct@CXTPDockingPaneAutoHidePanel@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
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
