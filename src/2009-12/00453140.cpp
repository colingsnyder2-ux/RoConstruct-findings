// roc 2009-12 00453140  unit: CRobloxControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00453140
//
// 00453140  56                   push esi
// 00453141  57                   push edi
// 00453142  8bf9                 mov edi, ecx
// 00453144  e897ffffff           call 0x4530e0
// 00453149  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045314d  8bf0                 mov esi, eax
// 0045314f  8b06                 mov eax, dword ptr [esi]
// 00453151  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00453157  51                   push ecx
// 00453158  57                   push edi
// 00453159  8bce                 mov ecx, esi
// 0045315b  ffd2                 call edx
// 0045315d  5f                   pop edi
// 0045315e  8bc6                 mov eax, esi
// 00453160  5e                   pop esi
// 00453161  c20400               ret 4
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
