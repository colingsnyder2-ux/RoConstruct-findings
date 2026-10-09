// roc 2007-03 00710940  unit: seg_00710000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00710940
//
// 00710940  56                   push esi
// 00710941  57                   push edi
// 00710942  8bf9                 mov edi, ecx
// 00710944  e887ffffff           call 0x7108d0
// 00710949  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071094d  8bf0                 mov esi, eax
// 0071094f  8b06                 mov eax, dword ptr [esi]
// 00710951  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00710957  51                   push ecx
// 00710958  57                   push edi
// 00710959  8bce                 mov ecx, esi
// 0071095b  ffd2                 call edx
// 0071095d  5f                   pop edi
// 0071095e  8bc6                 mov eax, esi
// 00710960  5e                   pop esi
// 00710961  c20400               ret 4
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
