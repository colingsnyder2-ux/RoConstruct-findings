// from server: 100% by colin
// roc 2007-08 00719af0  unit: CXTPRibbonControlSystemPopupBarListItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719af0
//
// 00719af0  56                   push esi
// 00719af1  8bf1                 mov esi, ecx
// 00719af3  e86809fbff           call 0x6ca460
// 00719af8  c7068c027e00         mov dword ptr [esi], 0x7e028c
// 00719afe  c746202c027e00       mov dword ptr [esi + 0x20], 0x7e022c
// 00719b05  c7865c0100002c010000 mov dword ptr [esi + 0x15c], 0x12c
// 00719b0f  c7866001000015000000 mov dword ptr [esi + 0x160], 0x15
// 00719b19  8bc6                 mov eax, esi
// 00719b1b  5e                   pop esi
// 00719b1c  c3                   ret 

struct CXTPRibbonControlSystemPopupBarListItem {
    char pad0[0x20];
    int m_field20;
    char pad24[0x15c - 0x24];
    int m_field15c;
    int m_field160;
    CXTPRibbonControlSystemPopupBarListItem* construct();
};

extern "C" void __stdcall sub_6ca460();

CXTPRibbonControlSystemPopupBarListItem* CXTPRibbonControlSystemPopupBarListItem::construct()
{
    sub_6ca460();
    *(int*)this = 0x7e028c;
    *(int*)((char*)this + 0x20) = 0x7e022c;
    *(int*)((char*)this + 0x15c) = 0x12c;
    *(int*)((char*)this + 0x160) = 0x15;
    return this;
}
