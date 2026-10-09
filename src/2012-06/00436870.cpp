// roc 2012-06 00436870  unit: CPatchedControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00436870
//
// 00436870  56                   push esi
// 00436871  57                   push edi
// 00436872  8bf9                 mov edi, ecx
// 00436874  e877ffffff           call 0x4367f0
// 00436879  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043687d  8bf0                 mov esi, eax
// 0043687f  8b06                 mov eax, dword ptr [esi]
// 00436881  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00436887  51                   push ecx
// 00436888  57                   push edi
// 00436889  8bce                 mov ecx, esi
// 0043688b  ffd2                 call edx
// 0043688d  5f                   pop edi
// 0043688e  8bc6                 mov eax, esi
// 00436890  5e                   pop esi
// 00436891  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000024@@QAEPAXPAX@Z)

namespace ns_ROCX000024 {
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
