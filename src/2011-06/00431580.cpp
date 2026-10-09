// roc 2011-06 00431580  unit: CPatchedControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00431580
//
// 00431580  56                   push esi
// 00431581  57                   push edi
// 00431582  8bf9                 mov edi, ecx
// 00431584  e897ffffff           call 0x431520
// 00431589  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043158d  8bf0                 mov esi, eax
// 0043158f  8b06                 mov eax, dword ptr [esi]
// 00431591  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00431597  51                   push ecx
// 00431598  57                   push edi
// 00431599  8bce                 mov ecx, esi
// 0043159b  ffd2                 call edx
// 0043159d  5f                   pop edi
// 0043159e  8bc6                 mov eax, esi
// 004315a0  5e                   pop esi
// 004315a1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002f@@QAEPAXPAX@Z)

namespace ns_ROCX00002f {
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
