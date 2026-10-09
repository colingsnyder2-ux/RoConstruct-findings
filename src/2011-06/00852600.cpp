// roc 2011-06 00852600  unit: CXTPControlPopupColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00852600
//
// 00852600  56                   push esi
// 00852601  57                   push edi
// 00852602  8bf9                 mov edi, ecx
// 00852604  e887ffffff           call 0x852590
// 00852609  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085260d  8bf0                 mov esi, eax
// 0085260f  8b06                 mov eax, dword ptr [esi]
// 00852611  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00852617  51                   push ecx
// 00852618  57                   push edi
// 00852619  8bce                 mov ecx, esi
// 0085261b  ffd2                 call edx
// 0085261d  5f                   pop edi
// 0085261e  8bc6                 mov eax, esi
// 00852620  5e                   pop esi
// 00852621  c20400               ret 4
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
