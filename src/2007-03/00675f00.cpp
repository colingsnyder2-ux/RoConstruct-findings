// roc 2007-03 00675f00  unit: seg_00670000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00675f00
//
// 00675f00  56                   push esi
// 00675f01  57                   push edi
// 00675f02  8bf9                 mov edi, ecx
// 00675f04  e887ffffff           call 0x675e90
// 00675f09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00675f0d  8bf0                 mov esi, eax
// 00675f0f  8b06                 mov eax, dword ptr [esi]
// 00675f11  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00675f17  51                   push ecx
// 00675f18  57                   push edi
// 00675f19  8bce                 mov ecx, esi
// 00675f1b  ffd2                 call edx
// 00675f1d  5f                   pop edi
// 00675f1e  8bc6                 mov eax, esi
// 00675f20  5e                   pop esi
// 00675f21  c20400               ret 4
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
