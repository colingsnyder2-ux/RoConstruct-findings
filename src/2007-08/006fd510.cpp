// from server: 63% by colin
// roc 2007-08 006fd510  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd510
//
// 006fd510  51                   push ecx
// 006fd511  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fd515  56                   push esi
// 006fd516  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fd51a  83c058               add eax, 0x58
// 006fd51d  50                   push eax
// 006fd51e  8bce                 mov ecx, esi
// 006fd520  c744240800000000     mov dword ptr [esp + 8], 0
// 006fd528  ff1574dd7700         call dword ptr [0x77dd74]
// 006fd52e  8bc6                 mov eax, esi
// 006fd530  5e                   pop esi
// 006fd531  59                   pop ecx
// 006fd532  c20800               ret 8

struct CAutoHidePanelTabManager
{
    char pad0[8];
    void* m_panel;
    char pad1[0x50];
    void* m_tab;
    CAutoHidePanelTabManager* construct(void* panel, void* tab);
};

extern "C" void __stdcall sub_77DD74(void*);

CAutoHidePanelTabManager* CAutoHidePanelTabManager::construct(void* panel, void* tab)
{
    m_tab = 0;
    sub_77DD74((char*)panel + 0x58);
    return this;
}
