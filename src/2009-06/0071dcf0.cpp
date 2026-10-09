// roc 2009-06 0071dcf0  unit: CXTPControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071dcf0
//
// 0071dcf0  56                   push esi
// 0071dcf1  57                   push edi
// 0071dcf2  8bf9                 mov edi, ecx
// 0071dcf4  e887ffffff           call 0x71dc80
// 0071dcf9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071dcfd  8bf0                 mov esi, eax
// 0071dcff  8b06                 mov eax, dword ptr [esi]
// 0071dd01  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0071dd07  51                   push ecx
// 0071dd08  57                   push edi
// 0071dd09  8bce                 mov ecx, esi
// 0071dd0b  ffd2                 call edx
// 0071dd0d  5f                   pop edi
// 0071dd0e  8bc6                 mov eax, esi
// 0071dd10  5e                   pop esi
// 0071dd11  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000023@@QAEPAXPAX@Z)

namespace ns_ROCX000023 {
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
