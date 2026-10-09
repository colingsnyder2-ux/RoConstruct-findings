// roc 2011-06 0085a460  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a460
//
// 0085a460  56                   push esi
// 0085a461  57                   push edi
// 0085a462  8bf9                 mov edi, ecx
// 0085a464  e887ffffff           call 0x85a3f0
// 0085a469  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085a46d  8bf0                 mov esi, eax
// 0085a46f  8b06                 mov eax, dword ptr [esi]
// 0085a471  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0085a477  51                   push ecx
// 0085a478  57                   push edi
// 0085a479  8bce                 mov ecx, esi
// 0085a47b  ffd2                 call edx
// 0085a47d  5f                   pop edi
// 0085a47e  8bc6                 mov eax, esi
// 0085a480  5e                   pop esi
// 0085a481  c20400               ret 4
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
