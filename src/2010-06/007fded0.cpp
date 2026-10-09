// roc 2010-06 007fded0  unit: CXTPControlCheckBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fded0
//
// 007fded0  56                   push esi
// 007fded1  57                   push edi
// 007fded2  8bf9                 mov edi, ecx
// 007fded4  e887ffffff           call 0x7fde60
// 007fded9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fdedd  8bf0                 mov esi, eax
// 007fdedf  8b06                 mov eax, dword ptr [esi]
// 007fdee1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007fdee7  51                   push ecx
// 007fdee8  57                   push edi
// 007fdee9  8bce                 mov ecx, esi
// 007fdeeb  ffd2                 call edx
// 007fdeed  5f                   pop edi
// 007fdeee  8bc6                 mov eax, esi
// 007fdef0  5e                   pop esi
// 007fdef1  c20400               ret 4
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
