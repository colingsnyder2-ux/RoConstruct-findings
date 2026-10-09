// roc 2007-03 0065f120  unit: seg_00650000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065f120
//
// 0065f120  56                   push esi
// 0065f121  57                   push edi
// 0065f122  8bf9                 mov edi, ecx
// 0065f124  e887ffffff           call 0x65f0b0
// 0065f129  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065f12d  8bf0                 mov esi, eax
// 0065f12f  8b06                 mov eax, dword ptr [esi]
// 0065f131  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0065f137  51                   push ecx
// 0065f138  57                   push edi
// 0065f139  8bce                 mov ecx, esi
// 0065f13b  ffd2                 call edx
// 0065f13d  5f                   pop edi
// 0065f13e  8bc6                 mov eax, esi
// 0065f140  5e                   pop esi
// 0065f141  c20400               ret 4
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
