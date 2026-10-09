// roc 2007-03 00631e80  unit: seg_00630000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00631e80
//
// 00631e80  56                   push esi
// 00631e81  57                   push edi
// 00631e82  8bf9                 mov edi, ecx
// 00631e84  e887ffffff           call 0x631e10
// 00631e89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00631e8d  8bf0                 mov esi, eax
// 00631e8f  8b06                 mov eax, dword ptr [esi]
// 00631e91  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00631e97  51                   push ecx
// 00631e98  57                   push edi
// 00631e99  8bce                 mov ecx, esi
// 00631e9b  ffd2                 call edx
// 00631e9d  5f                   pop edi
// 00631e9e  8bc6                 mov eax, esi
// 00631ea0  5e                   pop esi
// 00631ea1  c20400               ret 4
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
