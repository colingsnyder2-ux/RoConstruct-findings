// roc 2007-03 0070e980  unit: seg_00700000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070e980
//
// 0070e980  56                   push esi
// 0070e981  57                   push edi
// 0070e982  8bf9                 mov edi, ecx
// 0070e984  e887ffffff           call 0x70e910
// 0070e989  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070e98d  8bf0                 mov esi, eax
// 0070e98f  8b06                 mov eax, dword ptr [esi]
// 0070e991  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0070e997  51                   push ecx
// 0070e998  57                   push edi
// 0070e999  8bce                 mov ecx, esi
// 0070e99b  ffd2                 call edx
// 0070e99d  5f                   pop edi
// 0070e99e  8bc6                 mov eax, esi
// 0070e9a0  5e                   pop esi
// 0070e9a1  c20400               ret 4
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
