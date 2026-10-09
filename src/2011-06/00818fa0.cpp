// roc 2011-06 00818fa0  unit: CXTPControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00818fa0
//
// 00818fa0  56                   push esi
// 00818fa1  57                   push edi
// 00818fa2  8bf9                 mov edi, ecx
// 00818fa4  e887ffffff           call 0x818f30
// 00818fa9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00818fad  8bf0                 mov esi, eax
// 00818faf  8b06                 mov eax, dword ptr [esi]
// 00818fb1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00818fb7  51                   push ecx
// 00818fb8  57                   push edi
// 00818fb9  8bce                 mov ecx, esi
// 00818fbb  ffd2                 call edx
// 00818fbd  5f                   pop edi
// 00818fbe  8bc6                 mov eax, esi
// 00818fc0  5e                   pop esi
// 00818fc1  c20400               ret 4
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
