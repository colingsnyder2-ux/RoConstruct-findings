// roc 2009-12 00849b70  unit: CXTPControlWorkspaceActions  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00849b70
//
// 00849b70  56                   push esi
// 00849b71  57                   push edi
// 00849b72  8bf9                 mov edi, ecx
// 00849b74  e887ffffff           call 0x849b00
// 00849b79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00849b7d  8bf0                 mov esi, eax
// 00849b7f  8b06                 mov eax, dword ptr [esi]
// 00849b81  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00849b87  51                   push ecx
// 00849b88  57                   push edi
// 00849b89  8bce                 mov ecx, esi
// 00849b8b  ffd2                 call edx
// 00849b8d  5f                   pop edi
// 00849b8e  8bc6                 mov eax, esi
// 00849b90  5e                   pop esi
// 00849b91  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000031@@QAEPAXPAX@Z)

namespace ns_ROCX000031 {
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
