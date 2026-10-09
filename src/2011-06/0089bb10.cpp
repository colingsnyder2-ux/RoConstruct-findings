// roc 2011-06 0089bb10  unit: CXTPControlEdit  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089bb10
//
// 0089bb10  56                   push esi
// 0089bb11  57                   push edi
// 0089bb12  8bf9                 mov edi, ecx
// 0089bb14  e887ffffff           call 0x89baa0
// 0089bb19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089bb1d  8bf0                 mov esi, eax
// 0089bb1f  8b06                 mov eax, dword ptr [esi]
// 0089bb21  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0089bb27  51                   push ecx
// 0089bb28  57                   push edi
// 0089bb29  8bce                 mov ecx, esi
// 0089bb2b  ffd2                 call edx
// 0089bb2d  5f                   pop edi
// 0089bb2e  8bc6                 mov eax, esi
// 0089bb30  5e                   pop esi
// 0089bb31  c20400               ret 4
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
