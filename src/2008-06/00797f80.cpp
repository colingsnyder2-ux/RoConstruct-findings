// roc 2008-06 00797f80  unit: CXTPRibbonGroupControlPopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797f80
//
// 00797f80  56                   push esi
// 00797f81  57                   push edi
// 00797f82  8bf9                 mov edi, ecx
// 00797f84  e887ffffff           call 0x797f10
// 00797f89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00797f8d  8bf0                 mov esi, eax
// 00797f8f  8b06                 mov eax, dword ptr [esi]
// 00797f91  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00797f97  51                   push ecx
// 00797f98  57                   push edi
// 00797f99  8bce                 mov ecx, esi
// 00797f9b  ffd2                 call edx
// 00797f9d  5f                   pop edi
// 00797f9e  8bc6                 mov eax, esi
// 00797fa0  5e                   pop esi
// 00797fa1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00003c@@QAEPAXPAX@Z)

namespace ns_ROCX00003c {
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
