// roc 2007-03 00710430  unit: seg_00710000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00710430
//
// 00710430  8b8960020000         mov ecx, dword ptr [ecx + 0x260]
// 00710436  8b01                 mov eax, dword ptr [ecx]
// 00710438  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0071043e  56                   push esi
// 0071043f  8b742408             mov esi, dword ptr [esp + 8]
// 00710443  56                   push esi
// 00710444  ffd2                 call edx
// 00710446  8bc6                 mov eax, esi
// 00710448  5e                   pop esi
// 00710449  c20400               ret 4
// copied from an identical function in another client (function ?method_150@CXTPRibbonTabPopupToolBar@ns_ROCX000002@@QAEPAXPAX@Z)

namespace ns_ROCX000002 {
struct CXTPRibbonTabPopupToolBar
{
    char pad[0x260];
    void* field_260;
    void* method_150(void*);
};

void* CXTPRibbonTabPopupToolBar::method_150(void* arg)
{
    void* p = field_260;
    void** vtbl = *(void***)p;
    void* (__thiscall *fn)(void*, void*) = (void* (__thiscall *)(void*, void*))vtbl[0x150 / 4];
    fn(p, arg);
    return arg;
}
}
