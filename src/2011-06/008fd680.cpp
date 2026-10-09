// roc 2011-06 008fd680  unit: CXTPRibbonControlTab  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fd680
//
// 008fd680  56                   push esi
// 008fd681  57                   push edi
// 008fd682  8bf9                 mov edi, ecx
// 008fd684  e887ffffff           call 0x8fd610
// 008fd689  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008fd68d  8bf0                 mov esi, eax
// 008fd68f  8b06                 mov eax, dword ptr [esi]
// 008fd691  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008fd697  51                   push ecx
// 008fd698  57                   push edi
// 008fd699  8bce                 mov ecx, esi
// 008fd69b  ffd2                 call edx
// 008fd69d  5f                   pop edi
// 008fd69e  8bc6                 mov eax, esi
// 008fd6a0  5e                   pop esi
// 008fd6a1  c20400               ret 4
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
