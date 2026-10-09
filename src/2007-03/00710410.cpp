// roc 2007-03 00710410  unit: seg_00710000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00710410
//
// 00710410  8b8960020000         mov ecx, dword ptr [ecx + 0x260]
// 00710416  8b01                 mov eax, dword ptr [ecx]
// 00710418  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 0071041e  56                   push esi
// 0071041f  8b742408             mov esi, dword ptr [esp + 8]
// 00710423  56                   push esi
// 00710424  ffd2                 call edx
// 00710426  8bc6                 mov eax, esi
// 00710428  5e                   pop esi
// 00710429  c20400               ret 4
// copied from an identical function in another client (function ?method_00717a60@CXTPRibbonTabPopupToolBar@ns_ROCX000001@@QAEPAXPAX@Z)

namespace ns_ROCX000001 {
struct CXTPRibbonTabPopupToolBar
{
    char pad[0x260];
    void* field_260;
    void* method_00717a60(void* arg);
};

void* CXTPRibbonTabPopupToolBar::method_00717a60(void* arg)
{
    void* p = field_260;
    void** vtbl = *(void***)p;
    void* fn = vtbl[0x154 / 4];
    ((void (__thiscall*)(void*, void*))fn)(p, arg);
    return arg;
}
}
