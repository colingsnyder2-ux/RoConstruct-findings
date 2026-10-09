// roc 2008-06 006ea090  unit: CXTPControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ea090
//
// 006ea090  56                   push esi
// 006ea091  57                   push edi
// 006ea092  8bf9                 mov edi, ecx
// 006ea094  e887ffffff           call 0x6ea020
// 006ea099  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ea09d  8bf0                 mov esi, eax
// 006ea09f  8b06                 mov eax, dword ptr [esi]
// 006ea0a1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006ea0a7  51                   push ecx
// 006ea0a8  57                   push edi
// 006ea0a9  8bce                 mov ecx, esi
// 006ea0ab  ffd2                 call edx
// 006ea0ad  5f                   pop edi
// 006ea0ae  8bc6                 mov eax, esi
// 006ea0b0  5e                   pop esi
// 006ea0b1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00003c@@QAEPAXPAX@Z)

namespace ns_ROCX00003c {
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
