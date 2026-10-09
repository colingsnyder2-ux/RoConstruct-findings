// roc 2008-06 00722ed0  unit: CXTPRibbonBarControlQuickAccessPopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722ed0
//
// 00722ed0  56                   push esi
// 00722ed1  57                   push edi
// 00722ed2  8bf9                 mov edi, ecx
// 00722ed4  e887ffffff           call 0x722e60
// 00722ed9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00722edd  8bf0                 mov esi, eax
// 00722edf  8b06                 mov eax, dword ptr [esi]
// 00722ee1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00722ee7  51                   push ecx
// 00722ee8  57                   push edi
// 00722ee9  8bce                 mov ecx, esi
// 00722eeb  ffd2                 call edx
// 00722eed  5f                   pop edi
// 00722eee  8bc6                 mov eax, esi
// 00722ef0  5e                   pop esi
// 00722ef1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00003c@@QAEPAXPAX@Z)

namespace ns_ROCX00003c {
struct CRobloxControlColorSelector {
    void* sub_44cb40();
    void* sub_44cbb0(void* arg);
};

void* CRobloxControlColorSelector::sub_44cbb0(void* arg)
{
    void* p = sub_44cb40();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, void*, void*) = (void (__thiscall *)(void*, void*, void*))vtbl[0x38];
    fn(p, this, arg);
    return p;
}
}
