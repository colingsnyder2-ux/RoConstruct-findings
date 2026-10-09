// roc 2008-06 006a9610  unit: CXTPControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a9610
//
// 006a9610  56                   push esi
// 006a9611  57                   push edi
// 006a9612  8bf9                 mov edi, ecx
// 006a9614  e887ffffff           call 0x6a95a0
// 006a9619  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a961d  8bf0                 mov esi, eax
// 006a961f  8b06                 mov eax, dword ptr [esi]
// 006a9621  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006a9627  51                   push ecx
// 006a9628  57                   push edi
// 006a9629  8bce                 mov ecx, esi
// 006a962b  ffd2                 call edx
// 006a962d  5f                   pop edi
// 006a962e  8bc6                 mov eax, esi
// 006a9630  5e                   pop esi
// 006a9631  c20400               ret 4
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
