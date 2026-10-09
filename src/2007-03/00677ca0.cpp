// roc 2007-03 00677ca0  unit: seg_00670000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00677ca0
//
// 00677ca0  56                   push esi
// 00677ca1  57                   push edi
// 00677ca2  8bf9                 mov edi, ecx
// 00677ca4  e877ffffff           call 0x677c20
// 00677ca9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00677cad  8bf0                 mov esi, eax
// 00677caf  8b06                 mov eax, dword ptr [esi]
// 00677cb1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00677cb7  51                   push ecx
// 00677cb8  57                   push edi
// 00677cb9  8bce                 mov ecx, esi
// 00677cbb  ffd2                 call edx
// 00677cbd  5f                   pop edi
// 00677cbe  8bc6                 mov eax, esi
// 00677cc0  5e                   pop esi
// 00677cc1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000027@@QAEPAXPAX@Z)

namespace ns_ROCX000027 {
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
