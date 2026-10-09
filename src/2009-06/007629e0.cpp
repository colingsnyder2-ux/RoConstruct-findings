// roc 2009-06 007629e0  unit: CXTPControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007629e0
//
// 007629e0  56                   push esi
// 007629e1  57                   push edi
// 007629e2  8bf9                 mov edi, ecx
// 007629e4  e887ffffff           call 0x762970
// 007629e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007629ed  8bf0                 mov esi, eax
// 007629ef  8b06                 mov eax, dword ptr [esi]
// 007629f1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007629f7  51                   push ecx
// 007629f8  57                   push edi
// 007629f9  8bce                 mov ecx, esi
// 007629fb  ffd2                 call edx
// 007629fd  5f                   pop edi
// 007629fe  8bc6                 mov eax, esi
// 00762a00  5e                   pop esi
// 00762a01  c20400               ret 4
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
