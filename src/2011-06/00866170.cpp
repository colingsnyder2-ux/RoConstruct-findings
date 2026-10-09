// roc 2011-06 00866170  unit: CXTPControlTabWorkspace  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00866170
//
// 00866170  56                   push esi
// 00866171  57                   push edi
// 00866172  8bf9                 mov edi, ecx
// 00866174  e887ffffff           call 0x866100
// 00866179  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086617d  8bf0                 mov esi, eax
// 0086617f  8b06                 mov eax, dword ptr [esi]
// 00866181  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00866187  51                   push ecx
// 00866188  57                   push edi
// 00866189  8bce                 mov ecx, esi
// 0086618b  ffd2                 call edx
// 0086618d  5f                   pop edi
// 0086618e  8bc6                 mov eax, esi
// 00866190  5e                   pop esi
// 00866191  c20400               ret 4
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
