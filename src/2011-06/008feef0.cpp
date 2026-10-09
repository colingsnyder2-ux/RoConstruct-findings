// roc 2011-06 008feef0  unit: CXTPRibbonControlSystemPopupBarButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008feef0
//
// 008feef0  56                   push esi
// 008feef1  57                   push edi
// 008feef2  8bf9                 mov edi, ecx
// 008feef4  e887ffffff           call 0x8fee80
// 008feef9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008feefd  8bf0                 mov esi, eax
// 008feeff  8b06                 mov eax, dword ptr [esi]
// 008fef01  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008fef07  51                   push ecx
// 008fef08  57                   push edi
// 008fef09  8bce                 mov ecx, esi
// 008fef0b  ffd2                 call edx
// 008fef0d  5f                   pop edi
// 008fef0e  8bc6                 mov eax, esi
// 008fef10  5e                   pop esi
// 008fef11  c20400               ret 4
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
