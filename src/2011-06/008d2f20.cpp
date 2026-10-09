// roc 2011-06 008d2f20  unit: CXTPControlCustom  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2f20
//
// 008d2f20  56                   push esi
// 008d2f21  57                   push edi
// 008d2f22  8bf9                 mov edi, ecx
// 008d2f24  e887ffffff           call 0x8d2eb0
// 008d2f29  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d2f2d  8bf0                 mov esi, eax
// 008d2f2f  8b06                 mov eax, dword ptr [esi]
// 008d2f31  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008d2f37  51                   push ecx
// 008d2f38  57                   push edi
// 008d2f39  8bce                 mov ecx, esi
// 008d2f3b  ffd2                 call edx
// 008d2f3d  5f                   pop edi
// 008d2f3e  8bc6                 mov eax, esi
// 008d2f40  5e                   pop esi
// 008d2f41  c20400               ret 4
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
