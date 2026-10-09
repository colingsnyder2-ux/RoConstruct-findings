// roc 2009-06 0077bf10  unit: CXTPControlTabWorkspace  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077bf10
//
// 0077bf10  56                   push esi
// 0077bf11  57                   push edi
// 0077bf12  8bf9                 mov edi, ecx
// 0077bf14  e887ffffff           call 0x77bea0
// 0077bf19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077bf1d  8bf0                 mov esi, eax
// 0077bf1f  8b06                 mov eax, dword ptr [esi]
// 0077bf21  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0077bf27  51                   push ecx
// 0077bf28  57                   push edi
// 0077bf29  8bce                 mov ecx, esi
// 0077bf2b  ffd2                 call edx
// 0077bf2d  5f                   pop edi
// 0077bf2e  8bc6                 mov eax, esi
// 0077bf30  5e                   pop esi
// 0077bf31  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000023@@QAEPAXPAX@Z)

namespace ns_ROCX000023 {
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
