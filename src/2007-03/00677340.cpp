// roc 2007-03 00677340  unit: seg_00670000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00677340
//
// 00677340  56                   push esi
// 00677341  57                   push edi
// 00677342  8bf9                 mov edi, ecx
// 00677344  e887ffffff           call 0x6772d0
// 00677349  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067734d  8bf0                 mov esi, eax
// 0067734f  8b06                 mov eax, dword ptr [esi]
// 00677351  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00677357  51                   push ecx
// 00677358  57                   push edi
// 00677359  8bce                 mov ecx, esi
// 0067735b  ffd2                 call edx
// 0067735d  5f                   pop edi
// 0067735e  8bc6                 mov eax, esi
// 00677360  5e                   pop esi
// 00677361  c20400               ret 4
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
