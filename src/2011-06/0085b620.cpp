// roc 2011-06 0085b620  unit: CXTPControlWorkspaceActions  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085b620
//
// 0085b620  56                   push esi
// 0085b621  57                   push edi
// 0085b622  8bf9                 mov edi, ecx
// 0085b624  e887ffffff           call 0x85b5b0
// 0085b629  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085b62d  8bf0                 mov esi, eax
// 0085b62f  8b06                 mov eax, dword ptr [esi]
// 0085b631  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0085b637  51                   push ecx
// 0085b638  57                   push edi
// 0085b639  8bce                 mov ecx, esi
// 0085b63b  ffd2                 call edx
// 0085b63d  5f                   pop edi
// 0085b63e  8bc6                 mov eax, esi
// 0085b640  5e                   pop esi
// 0085b641  c20400               ret 4
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
