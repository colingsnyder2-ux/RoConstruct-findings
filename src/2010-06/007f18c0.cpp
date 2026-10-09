// roc 2010-06 007f18c0  unit: CXTPControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f18c0
//
// 007f18c0  56                   push esi
// 007f18c1  57                   push edi
// 007f18c2  8bf9                 mov edi, ecx
// 007f18c4  e887ffffff           call 0x7f1850
// 007f18c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f18cd  8bf0                 mov esi, eax
// 007f18cf  8b06                 mov eax, dword ptr [esi]
// 007f18d1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007f18d7  51                   push ecx
// 007f18d8  57                   push edi
// 007f18d9  8bce                 mov ecx, esi
// 007f18db  ffd2                 call edx
// 007f18dd  5f                   pop edi
// 007f18de  8bc6                 mov eax, esi
// 007f18e0  5e                   pop esi
// 007f18e1  c20400               ret 4
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
