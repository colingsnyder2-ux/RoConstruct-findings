// roc 2010-06 0083eb40  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083eb40
//
// 0083eb40  56                   push esi
// 0083eb41  57                   push edi
// 0083eb42  8bf9                 mov edi, ecx
// 0083eb44  e887ffffff           call 0x83ead0
// 0083eb49  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083eb4d  8bf0                 mov esi, eax
// 0083eb4f  8b06                 mov eax, dword ptr [esi]
// 0083eb51  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0083eb57  51                   push ecx
// 0083eb58  57                   push edi
// 0083eb59  8bce                 mov ecx, esi
// 0083eb5b  ffd2                 call edx
// 0083eb5d  5f                   pop edi
// 0083eb5e  8bc6                 mov eax, esi
// 0083eb60  5e                   pop esi
// 0083eb61  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002d@@QAEPAXPAX@Z)

namespace ns_ROCX00002d {
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
