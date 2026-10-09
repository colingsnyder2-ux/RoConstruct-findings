// roc 2010-06 00849c10  unit: CXTPRibbonBarControlQuickAccessPopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00849c10
//
// 00849c10  56                   push esi
// 00849c11  57                   push edi
// 00849c12  8bf9                 mov edi, ecx
// 00849c14  e887ffffff           call 0x849ba0
// 00849c19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00849c1d  8bf0                 mov esi, eax
// 00849c1f  8b06                 mov eax, dword ptr [esi]
// 00849c21  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00849c27  51                   push ecx
// 00849c28  57                   push edi
// 00849c29  8bce                 mov ecx, esi
// 00849c2b  ffd2                 call edx
// 00849c2d  5f                   pop edi
// 00849c2e  8bc6                 mov eax, esi
// 00849c30  5e                   pop esi
// 00849c31  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002d@@QAEPAXPAX@Z)

namespace ns_ROCX00002d {
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
