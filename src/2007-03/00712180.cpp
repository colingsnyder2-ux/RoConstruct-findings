// roc 2007-03 00712180  unit: seg_00710000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00712180
//
// 00712180  56                   push esi
// 00712181  57                   push edi
// 00712182  8bf9                 mov edi, ecx
// 00712184  e887ffffff           call 0x712110
// 00712189  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071218d  8bf0                 mov esi, eax
// 0071218f  8b06                 mov eax, dword ptr [esi]
// 00712191  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00712197  51                   push ecx
// 00712198  57                   push edi
// 00712199  8bce                 mov ecx, esi
// 0071219b  ffd2                 call edx
// 0071219d  5f                   pop edi
// 0071219e  8bc6                 mov eax, esi
// 007121a0  5e                   pop esi
// 007121a1  c20400               ret 4
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
