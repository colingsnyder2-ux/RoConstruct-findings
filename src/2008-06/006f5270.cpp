// roc 2008-06 006f5270  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5270
//
// 006f5270  56                   push esi
// 006f5271  57                   push edi
// 006f5272  8bf9                 mov edi, ecx
// 006f5274  e887ffffff           call 0x6f5200
// 006f5279  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f527d  8bf0                 mov esi, eax
// 006f527f  8b06                 mov eax, dword ptr [esi]
// 006f5281  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006f5287  51                   push ecx
// 006f5288  57                   push edi
// 006f5289  8bce                 mov ecx, esi
// 006f528b  ffd2                 call edx
// 006f528d  5f                   pop edi
// 006f528e  8bc6                 mov eax, esi
// 006f5290  5e                   pop esi
// 006f5291  c20400               ret 4
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
