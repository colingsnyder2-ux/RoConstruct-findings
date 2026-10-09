// roc 2009-06 00761ed0  unit: CXTPControlPopupColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761ed0
//
// 00761ed0  56                   push esi
// 00761ed1  57                   push edi
// 00761ed2  8bf9                 mov edi, ecx
// 00761ed4  e887ffffff           call 0x761e60
// 00761ed9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00761edd  8bf0                 mov esi, eax
// 00761edf  8b06                 mov eax, dword ptr [esi]
// 00761ee1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00761ee7  51                   push ecx
// 00761ee8  57                   push edi
// 00761ee9  8bce                 mov ecx, esi
// 00761eeb  ffd2                 call edx
// 00761eed  5f                   pop edi
// 00761eee  8bc6                 mov eax, esi
// 00761ef0  5e                   pop esi
// 00761ef1  c20400               ret 4
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
