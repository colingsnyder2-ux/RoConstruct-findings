// roc 2011-06 0046ec90  unit: CRobloxControlMaterialSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046ec90
//
// 0046ec90  56                   push esi
// 0046ec91  57                   push edi
// 0046ec92  8bf9                 mov edi, ecx
// 0046ec94  e897ffffff           call 0x46ec30
// 0046ec99  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046ec9d  8bf0                 mov esi, eax
// 0046ec9f  8b06                 mov eax, dword ptr [esi]
// 0046eca1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0046eca7  51                   push ecx
// 0046eca8  57                   push edi
// 0046eca9  8bce                 mov ecx, esi
// 0046ecab  ffd2                 call edx
// 0046ecad  5f                   pop edi
// 0046ecae  8bc6                 mov eax, esi
// 0046ecb0  5e                   pop esi
// 0046ecb1  c20400               ret 4
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
