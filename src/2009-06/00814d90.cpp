// roc 2009-06 00814d90  unit: CXTPRibbonControlTab  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00814d90
//
// 00814d90  56                   push esi
// 00814d91  57                   push edi
// 00814d92  8bf9                 mov edi, ecx
// 00814d94  e887ffffff           call 0x814d20
// 00814d99  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00814d9d  8bf0                 mov esi, eax
// 00814d9f  8b06                 mov eax, dword ptr [esi]
// 00814da1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00814da7  51                   push ecx
// 00814da8  57                   push edi
// 00814da9  8bce                 mov ecx, esi
// 00814dab  ffd2                 call edx
// 00814dad  5f                   pop edi
// 00814dae  8bc6                 mov eax, esi
// 00814db0  5e                   pop esi
// 00814db1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000023@@QAEPAXPAX@Z)

namespace ns_ROCX000023 {
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
