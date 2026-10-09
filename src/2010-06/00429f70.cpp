// roc 2010-06 00429f70  unit: CPatchedControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00429f70
//
// 00429f70  56                   push esi
// 00429f71  57                   push edi
// 00429f72  8bf9                 mov edi, ecx
// 00429f74  e877ffffff           call 0x429ef0
// 00429f79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00429f7d  8bf0                 mov esi, eax
// 00429f7f  8b06                 mov eax, dword ptr [esi]
// 00429f81  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00429f87  51                   push ecx
// 00429f88  57                   push edi
// 00429f89  8bce                 mov ecx, esi
// 00429f8b  ffd2                 call edx
// 00429f8d  5f                   pop edi
// 00429f8e  8bc6                 mov eax, esi
// 00429f90  5e                   pop esi
// 00429f91  c20400               ret 4
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
