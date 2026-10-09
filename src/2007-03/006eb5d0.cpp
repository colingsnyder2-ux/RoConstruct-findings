// roc 2007-03 006eb5d0  unit: seg_006e0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006eb5d0
//
// 006eb5d0  56                   push esi
// 006eb5d1  57                   push edi
// 006eb5d2  8bf9                 mov edi, ecx
// 006eb5d4  e887ffffff           call 0x6eb560
// 006eb5d9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006eb5dd  8bf0                 mov esi, eax
// 006eb5df  8b06                 mov eax, dword ptr [esi]
// 006eb5e1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006eb5e7  51                   push ecx
// 006eb5e8  57                   push edi
// 006eb5e9  8bce                 mov ecx, esi
// 006eb5eb  ffd2                 call edx
// 006eb5ed  5f                   pop edi
// 006eb5ee  8bc6                 mov eax, esi
// 006eb5f0  5e                   pop esi
// 006eb5f1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000027@@QAEPAXPAX@Z)

namespace ns_ROCX000027 {
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
