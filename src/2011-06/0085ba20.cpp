// roc 2011-06 0085ba20  unit: CXTPControlSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085ba20
//
// 0085ba20  56                   push esi
// 0085ba21  57                   push edi
// 0085ba22  8bf9                 mov edi, ecx
// 0085ba24  e887ffffff           call 0x85b9b0
// 0085ba29  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085ba2d  8bf0                 mov esi, eax
// 0085ba2f  8b06                 mov eax, dword ptr [esi]
// 0085ba31  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0085ba37  51                   push ecx
// 0085ba38  57                   push edi
// 0085ba39  8bce                 mov ecx, esi
// 0085ba3b  ffd2                 call edx
// 0085ba3d  5f                   pop edi
// 0085ba3e  8bc6                 mov eax, esi
// 0085ba40  5e                   pop esi
// 0085ba41  c20400               ret 4
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
