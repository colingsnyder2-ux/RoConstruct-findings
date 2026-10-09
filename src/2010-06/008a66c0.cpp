// roc 2010-06 008a66c0  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a66c0
//
// 008a66c0  56                   push esi
// 008a66c1  57                   push edi
// 008a66c2  8bf9                 mov edi, ecx
// 008a66c4  e887ffffff           call 0x8a6650
// 008a66c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a66cd  8bf0                 mov esi, eax
// 008a66cf  8b06                 mov eax, dword ptr [esi]
// 008a66d1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008a66d7  51                   push ecx
// 008a66d8  57                   push edi
// 008a66d9  8bce                 mov ecx, esi
// 008a66db  ffd2                 call edx
// 008a66dd  5f                   pop edi
// 008a66de  8bc6                 mov eax, esi
// 008a66e0  5e                   pop esi
// 008a66e1  c20400               ret 4
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
