// roc 2008-06 006f5cf0  unit: CXTPControlRecentFileList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5cf0
//
// 006f5cf0  56                   push esi
// 006f5cf1  57                   push edi
// 006f5cf2  8bf9                 mov edi, ecx
// 006f5cf4  e887ffffff           call 0x6f5c80
// 006f5cf9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f5cfd  8bf0                 mov esi, eax
// 006f5cff  8b06                 mov eax, dword ptr [esi]
// 006f5d01  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006f5d07  51                   push ecx
// 006f5d08  57                   push edi
// 006f5d09  8bce                 mov ecx, esi
// 006f5d0b  ffd2                 call edx
// 006f5d0d  5f                   pop edi
// 006f5d0e  8bc6                 mov eax, esi
// 006f5d10  5e                   pop esi
// 006f5d11  c20400               ret 4
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
