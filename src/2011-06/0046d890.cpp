// roc 2011-06 0046d890  unit: CRobloxControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046d890
//
// 0046d890  56                   push esi
// 0046d891  57                   push edi
// 0046d892  8bf9                 mov edi, ecx
// 0046d894  e897ffffff           call 0x46d830
// 0046d899  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046d89d  8bf0                 mov esi, eax
// 0046d89f  8b06                 mov eax, dword ptr [esi]
// 0046d8a1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0046d8a7  51                   push ecx
// 0046d8a8  57                   push edi
// 0046d8a9  8bce                 mov ecx, esi
// 0046d8ab  ffd2                 call edx
// 0046d8ad  5f                   pop edi
// 0046d8ae  8bc6                 mov eax, esi
// 0046d8b0  5e                   pop esi
// 0046d8b1  c20400               ret 4
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
