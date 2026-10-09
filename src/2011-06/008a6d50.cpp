// roc 2011-06 008a6d50  unit: CXTPRibbonBarControlQuickAccessPopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6d50
//
// 008a6d50  56                   push esi
// 008a6d51  57                   push edi
// 008a6d52  8bf9                 mov edi, ecx
// 008a6d54  e887ffffff           call 0x8a6ce0
// 008a6d59  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a6d5d  8bf0                 mov esi, eax
// 008a6d5f  8b06                 mov eax, dword ptr [esi]
// 008a6d61  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008a6d67  51                   push ecx
// 008a6d68  57                   push edi
// 008a6d69  8bce                 mov ecx, esi
// 008a6d6b  ffd2                 call edx
// 008a6d6d  5f                   pop edi
// 008a6d6e  8bc6                 mov eax, esi
// 008a6d70  5e                   pop esi
// 008a6d71  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002f@@QAEPAXPAX@Z)

namespace ns_ROCX00002f {
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
