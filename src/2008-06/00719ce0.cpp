// roc 2008-06 00719ce0  unit: CXTCaption  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719ce0
//
// 00719ce0  56                   push esi
// 00719ce1  8bf1                 mov esi, ecx
// 00719ce3  8d4e78               lea ecx, [esi + 0x78]
// 00719ce6  ff15143f8000         call dword ptr [0x803f14]
// 00719cec  8bce                 mov ecx, esi
// 00719cee  5e                   pop esi
// 00719cef  e9de71f8ff           jmp 0x6a0ed2
// copied from an identical function in another client (function ?Destruct@CXTPDockingPaneAutoHidePanel@ns_ROCX000008@@QAEXXZ)

namespace ns_ROCX000008 {
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
