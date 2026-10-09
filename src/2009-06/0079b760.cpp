// roc 2009-06 0079b760  unit: CXTPResourceManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079b760
//
// 0079b760  56                   push esi
// 0079b761  8bf1                 mov esi, ecx
// 0079b763  8d4e78               lea ecx, [esi + 0x78]
// 0079b766  ff1510fd8900         call dword ptr [0x89fd10]
// 0079b76c  8bce                 mov ecx, esi
// 0079b76e  5e                   pop esi
// 0079b76f  e9f4dbf7ff           jmp 0x719368
// copied from an identical function in another client (function ?Destruct@CXTPDockingPaneAutoHidePanel@ns_ROCX000007@@QAEXXZ)

namespace ns_ROCX000007 {
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
