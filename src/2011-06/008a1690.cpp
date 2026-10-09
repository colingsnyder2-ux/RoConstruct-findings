// roc 2011-06 008a1690  unit: CXTPToolBar::CControlButtonHide  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a1690
//
// 008a1690  56                   push esi
// 008a1691  57                   push edi
// 008a1692  8bf9                 mov edi, ecx
// 008a1694  e887ffffff           call 0x8a1620
// 008a1699  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a169d  8bf0                 mov esi, eax
// 008a169f  8b06                 mov eax, dword ptr [esi]
// 008a16a1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008a16a7  51                   push ecx
// 008a16a8  57                   push edi
// 008a16a9  8bce                 mov ecx, esi
// 008a16ab  ffd2                 call edx
// 008a16ad  5f                   pop edi
// 008a16ae  8bc6                 mov eax, esi
// 008a16b0  5e                   pop esi
// 008a16b1  c20400               ret 4
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
