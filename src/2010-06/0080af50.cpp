// roc 2010-06 0080af50  unit: CXTPControlTabWorkspace  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080af50
//
// 0080af50  56                   push esi
// 0080af51  57                   push edi
// 0080af52  8bf9                 mov edi, ecx
// 0080af54  e887ffffff           call 0x80aee0
// 0080af59  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080af5d  8bf0                 mov esi, eax
// 0080af5f  8b06                 mov eax, dword ptr [esi]
// 0080af61  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0080af67  51                   push ecx
// 0080af68  57                   push edi
// 0080af69  8bce                 mov ecx, esi
// 0080af6b  ffd2                 call edx
// 0080af6d  5f                   pop edi
// 0080af6e  8bc6                 mov eax, esi
// 0080af70  5e                   pop esi
// 0080af71  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002d@@QAEPAXPAX@Z)

namespace ns_ROCX00002d {
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
