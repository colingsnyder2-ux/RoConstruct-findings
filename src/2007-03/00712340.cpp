// roc 2007-03 00712340  unit: seg_00710000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00712340
//
// 00712340  56                   push esi
// 00712341  57                   push edi
// 00712342  8bf9                 mov edi, ecx
// 00712344  e887ffffff           call 0x7122d0
// 00712349  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071234d  8bf0                 mov esi, eax
// 0071234f  8b06                 mov eax, dword ptr [esi]
// 00712351  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00712357  51                   push ecx
// 00712358  57                   push edi
// 00712359  8bce                 mov ecx, esi
// 0071235b  ffd2                 call edx
// 0071235d  5f                   pop edi
// 0071235e  8bc6                 mov eax, esi
// 00712360  5e                   pop esi
// 00712361  c20400               ret 4
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
