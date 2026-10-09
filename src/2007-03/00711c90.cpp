// roc 2007-03 00711c90  unit: seg_00710000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00711c90
//
// 00711c90  56                   push esi
// 00711c91  57                   push edi
// 00711c92  8bf9                 mov edi, ecx
// 00711c94  e887ffffff           call 0x711c20
// 00711c99  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00711c9d  8bf0                 mov esi, eax
// 00711c9f  8b06                 mov eax, dword ptr [esi]
// 00711ca1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00711ca7  51                   push ecx
// 00711ca8  57                   push edi
// 00711ca9  8bce                 mov ecx, esi
// 00711cab  ffd2                 call edx
// 00711cad  5f                   pop edi
// 00711cae  8bc6                 mov eax, esi
// 00711cb0  5e                   pop esi
// 00711cb1  c20400               ret 4
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
