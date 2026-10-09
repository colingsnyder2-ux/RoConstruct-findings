// roc 2010-06 008a6360  unit: CXTPRibbonControlSystemPopupBarButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a6360
//
// 008a6360  56                   push esi
// 008a6361  57                   push edi
// 008a6362  8bf9                 mov edi, ecx
// 008a6364  e887ffffff           call 0x8a62f0
// 008a6369  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a636d  8bf0                 mov esi, eax
// 008a636f  8b06                 mov eax, dword ptr [esi]
// 008a6371  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008a6377  51                   push ecx
// 008a6378  57                   push edi
// 008a6379  8bce                 mov ecx, esi
// 008a637b  ffd2                 call edx
// 008a637d  5f                   pop edi
// 008a637e  8bc6                 mov eax, esi
// 008a6380  5e                   pop esi
// 008a6381  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002d@@QAEPAXPAX@Z)

namespace ns_ROCX00002d {
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
