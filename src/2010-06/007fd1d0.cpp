// roc 2010-06 007fd1d0  unit: CXTPControlOleItems  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fd1d0
//
// 007fd1d0  56                   push esi
// 007fd1d1  57                   push edi
// 007fd1d2  8bf9                 mov edi, ecx
// 007fd1d4  e887ffffff           call 0x7fd160
// 007fd1d9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fd1dd  8bf0                 mov esi, eax
// 007fd1df  8b06                 mov eax, dword ptr [esi]
// 007fd1e1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007fd1e7  51                   push ecx
// 007fd1e8  57                   push edi
// 007fd1e9  8bce                 mov ecx, esi
// 007fd1eb  ffd2                 call edx
// 007fd1ed  5f                   pop edi
// 007fd1ee  8bc6                 mov eax, esi
// 007fd1f0  5e                   pop esi
// 007fd1f1  c20400               ret 4
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
