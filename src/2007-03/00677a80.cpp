// roc 2007-03 00677a80  unit: seg_00670000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00677a80
//
// 00677a80  56                   push esi
// 00677a81  57                   push edi
// 00677a82  8bf9                 mov edi, ecx
// 00677a84  e887ffffff           call 0x677a10
// 00677a89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00677a8d  8bf0                 mov esi, eax
// 00677a8f  8b06                 mov eax, dword ptr [esi]
// 00677a91  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00677a97  51                   push ecx
// 00677a98  57                   push edi
// 00677a99  8bce                 mov ecx, esi
// 00677a9b  ffd2                 call edx
// 00677a9d  5f                   pop edi
// 00677a9e  8bc6                 mov eax, esi
// 00677aa0  5e                   pop esi
// 00677aa1  c20400               ret 4
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
