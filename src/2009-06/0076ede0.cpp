// roc 2009-06 0076ede0  unit: CXTPControlWorkspaceActions  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076ede0
//
// 0076ede0  56                   push esi
// 0076ede1  57                   push edi
// 0076ede2  8bf9                 mov edi, ecx
// 0076ede4  e887ffffff           call 0x76ed70
// 0076ede9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076eded  8bf0                 mov esi, eax
// 0076edef  8b06                 mov eax, dword ptr [esi]
// 0076edf1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0076edf7  51                   push ecx
// 0076edf8  57                   push edi
// 0076edf9  8bce                 mov ecx, esi
// 0076edfb  ffd2                 call edx
// 0076edfd  5f                   pop edi
// 0076edfe  8bc6                 mov eax, esi
// 0076ee00  5e                   pop esi
// 0076ee01  c20400               ret 4
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
