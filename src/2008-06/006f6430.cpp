// roc 2008-06 006f6430  unit: CXTPControlWorkspaceActions  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6430
//
// 006f6430  56                   push esi
// 006f6431  57                   push edi
// 006f6432  8bf9                 mov edi, ecx
// 006f6434  e887ffffff           call 0x6f63c0
// 006f6439  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f643d  8bf0                 mov esi, eax
// 006f643f  8b06                 mov eax, dword ptr [esi]
// 006f6441  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006f6447  51                   push ecx
// 006f6448  57                   push edi
// 006f6449  8bce                 mov ecx, esi
// 006f644b  ffd2                 call edx
// 006f644d  5f                   pop edi
// 006f644e  8bc6                 mov eax, esi
// 006f6450  5e                   pop esi
// 006f6451  c20400               ret 4
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
