// roc 2007-03 0069a9f0  unit: seg_00690000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069a9f0
//
// 0069a9f0  56                   push esi
// 0069a9f1  57                   push edi
// 0069a9f2  8bf9                 mov edi, ecx
// 0069a9f4  e887ffffff           call 0x69a980
// 0069a9f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069a9fd  8bf0                 mov esi, eax
// 0069a9ff  8b06                 mov eax, dword ptr [esi]
// 0069aa01  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0069aa07  51                   push ecx
// 0069aa08  57                   push edi
// 0069aa09  8bce                 mov ecx, esi
// 0069aa0b  ffd2                 call edx
// 0069aa0d  5f                   pop edi
// 0069aa0e  8bc6                 mov eax, esi
// 0069aa10  5e                   pop esi
// 0069aa11  c20400               ret 4
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
