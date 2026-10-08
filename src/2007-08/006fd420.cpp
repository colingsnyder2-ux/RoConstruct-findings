// from server: 63% by colin
// roc 2007-08 006fd420  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd420
//
// 006fd420  51                   push ecx
// 006fd421  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fd425  56                   push esi
// 006fd426  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fd42a  83c054               add eax, 0x54
// 006fd42d  50                   push eax
// 006fd42e  8bce                 mov ecx, esi
// 006fd430  c744240800000000     mov dword ptr [esp + 8], 0
// 006fd438  ff1574dd7700         call dword ptr [0x77dd74]
// 006fd43e  8bc6                 mov eax, esi
// 006fd440  5e                   pop esi
// 006fd441  59                   pop ecx
// 006fd442  c20800               ret 8

struct CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager
{
    char pad0[4];
    int m_field4;
    int construct(int a, int b);
};

extern "C" void __stdcall sub_77dd74(int);

int CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager::construct(int a, int b)
{
    m_field4 = 0;
    sub_77dd74(a + 0x54);
    return (int)this;
}
