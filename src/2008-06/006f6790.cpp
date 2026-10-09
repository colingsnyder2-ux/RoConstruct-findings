// roc 2008-06 006f6790  unit: CXTPControlRadioButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6790
//
// 006f6790  56                   push esi
// 006f6791  57                   push edi
// 006f6792  8bf9                 mov edi, ecx
// 006f6794  e887ffffff           call 0x6f6720
// 006f6799  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f679d  8bf0                 mov esi, eax
// 006f679f  8b06                 mov eax, dword ptr [esi]
// 006f67a1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006f67a7  51                   push ecx
// 006f67a8  57                   push edi
// 006f67a9  8bce                 mov ecx, esi
// 006f67ab  ffd2                 call edx
// 006f67ad  5f                   pop edi
// 006f67ae  8bc6                 mov eax, esi
// 006f67b0  5e                   pop esi
// 006f67b1  c20400               ret 4
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
