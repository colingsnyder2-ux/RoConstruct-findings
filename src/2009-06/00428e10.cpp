// roc 2009-06 00428e10  unit: CPatchedControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00428e10
//
// 00428e10  56                   push esi
// 00428e11  57                   push edi
// 00428e12  8bf9                 mov edi, ecx
// 00428e14  e897ffffff           call 0x428db0
// 00428e19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00428e1d  8bf0                 mov esi, eax
// 00428e1f  8b06                 mov eax, dword ptr [esi]
// 00428e21  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00428e27  51                   push ecx
// 00428e28  57                   push edi
// 00428e29  8bce                 mov ecx, esi
// 00428e2b  ffd2                 call edx
// 00428e2d  5f                   pop edi
// 00428e2e  8bc6                 mov eax, esi
// 00428e30  5e                   pop esi
// 00428e31  c20400               ret 4
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
