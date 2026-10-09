// roc 2007-03 006b2010  unit: seg_006b0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b2010
//
// 006b2010  56                   push esi
// 006b2011  57                   push edi
// 006b2012  8bf9                 mov edi, ecx
// 006b2014  e887ffffff           call 0x6b1fa0
// 006b2019  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b201d  8bf0                 mov esi, eax
// 006b201f  8b06                 mov eax, dword ptr [esi]
// 006b2021  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006b2027  51                   push ecx
// 006b2028  57                   push edi
// 006b2029  8bce                 mov ecx, esi
// 006b202b  ffd2                 call edx
// 006b202d  5f                   pop edi
// 006b202e  8bc6                 mov eax, esi
// 006b2030  5e                   pop esi
// 006b2031  c20400               ret 4
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
