// roc 2010-06 007f11d0  unit: CXTPControlButtonColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f11d0
//
// 007f11d0  56                   push esi
// 007f11d1  57                   push edi
// 007f11d2  8bf9                 mov edi, ecx
// 007f11d4  e887ffffff           call 0x7f1160
// 007f11d9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f11dd  8bf0                 mov esi, eax
// 007f11df  8b06                 mov eax, dword ptr [esi]
// 007f11e1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007f11e7  51                   push ecx
// 007f11e8  57                   push edi
// 007f11e9  8bce                 mov ecx, esi
// 007f11eb  ffd2                 call edx
// 007f11ed  5f                   pop edi
// 007f11ee  8bc6                 mov eax, esi
// 007f11f0  5e                   pop esi
// 007f11f1  c20400               ret 4
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
