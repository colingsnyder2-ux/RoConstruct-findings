// from server: 100% by colin
// roc 2007-08 006a04f0  unit: CXTPDockingPaneAutoHidePanel  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a04f0
//
// 006a04f0  56                   push esi
// 006a04f1  8bf1                 mov esi, ecx
// 006a04f3  8d4e78               lea ecx, [esi + 0x78]
// 006a04f6  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006a04fc  8bce                 mov ecx, esi
// 006a04fe  5e                   pop esi
// 006a04ff  e90efff8ff           jmp 0x630412

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
