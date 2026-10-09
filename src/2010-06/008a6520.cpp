// roc 2010-06 008a6520  unit: CXTPRibbonControlSystemPopupBarListItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a6520
//
// 008a6520  56                   push esi
// 008a6521  57                   push edi
// 008a6522  8bf9                 mov edi, ecx
// 008a6524  e887ffffff           call 0x8a64b0
// 008a6529  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a652d  8bf0                 mov esi, eax
// 008a652f  8b06                 mov eax, dword ptr [esi]
// 008a6531  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008a6537  51                   push ecx
// 008a6538  57                   push edi
// 008a6539  8bce                 mov ecx, esi
// 008a653b  ffd2                 call edx
// 008a653d  5f                   pop edi
// 008a653e  8bc6                 mov eax, esi
// 008a6540  5e                   pop esi
// 008a6541  c20400               ret 4
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
