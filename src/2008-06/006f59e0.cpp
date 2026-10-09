// roc 2008-06 006f59e0  unit: CXTPControlOleItems  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f59e0
//
// 006f59e0  56                   push esi
// 006f59e1  57                   push edi
// 006f59e2  8bf9                 mov edi, ecx
// 006f59e4  e887ffffff           call 0x6f5970
// 006f59e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f59ed  8bf0                 mov esi, eax
// 006f59ef  8b06                 mov eax, dword ptr [esi]
// 006f59f1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006f59f7  51                   push ecx
// 006f59f8  57                   push edi
// 006f59f9  8bce                 mov ecx, esi
// 006f59fb  ffd2                 call edx
// 006f59fd  5f                   pop edi
// 006f59fe  8bc6                 mov eax, esi
// 006f5a00  5e                   pop esi
// 006f5a01  c20400               ret 4
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
