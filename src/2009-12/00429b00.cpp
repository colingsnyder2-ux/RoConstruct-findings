// roc 2009-12 00429b00  unit: CPatchedControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00429b00
//
// 00429b00  56                   push esi
// 00429b01  57                   push edi
// 00429b02  8bf9                 mov edi, ecx
// 00429b04  e897ffffff           call 0x429aa0
// 00429b09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00429b0d  8bf0                 mov esi, eax
// 00429b0f  8b06                 mov eax, dword ptr [esi]
// 00429b11  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00429b17  51                   push ecx
// 00429b18  57                   push edi
// 00429b19  8bce                 mov ecx, esi
// 00429b1b  ffd2                 call edx
// 00429b1d  5f                   pop edi
// 00429b1e  8bc6                 mov eax, esi
// 00429b20  5e                   pop esi
// 00429b21  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000031@@QAEPAXPAX@Z)

namespace ns_ROCX000031 {
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
