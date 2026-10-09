// roc 2007-03 00693df0  unit: seg_00690000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00693df0
//
// 00693df0  56                   push esi
// 00693df1  8bf1                 mov esi, ecx
// 00693df3  8d4e78               lea ecx, [esi + 0x78]
// 00693df6  ff1578dd7700         call dword ptr [0x77dd78]
// 00693dfc  8bce                 mov ecx, esi
// 00693dfe  5e                   pop esi
// 00693dff  e9a2aaf8ff           jmp 0x61e8a6
// copied from an identical function in another client (function ?Destruct@CXTPDockingPaneAutoHidePanel@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX00000b {
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
