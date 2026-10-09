// roc 2012-06 00478790  unit: CRobloxControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00478790
//
// 00478790  56                   push esi
// 00478791  57                   push edi
// 00478792  8bf9                 mov edi, ecx
// 00478794  e897ffffff           call 0x478730
// 00478799  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047879d  8bf0                 mov esi, eax
// 0047879f  8b06                 mov eax, dword ptr [esi]
// 004787a1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 004787a7  51                   push ecx
// 004787a8  57                   push edi
// 004787a9  8bce                 mov ecx, esi
// 004787ab  ffd2                 call edx
// 004787ad  5f                   pop edi
// 004787ae  8bc6                 mov eax, esi
// 004787b0  5e                   pop esi
// 004787b1  c20400               ret 4
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
