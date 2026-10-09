// roc 2010-06 007fdc10  unit: CXTPControlWorkspaceActions  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fdc10
//
// 007fdc10  56                   push esi
// 007fdc11  57                   push edi
// 007fdc12  8bf9                 mov edi, ecx
// 007fdc14  e887ffffff           call 0x7fdba0
// 007fdc19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fdc1d  8bf0                 mov esi, eax
// 007fdc1f  8b06                 mov eax, dword ptr [esi]
// 007fdc21  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007fdc27  51                   push ecx
// 007fdc28  57                   push edi
// 007fdc29  8bce                 mov ecx, esi
// 007fdc2b  ffd2                 call edx
// 007fdc2d  5f                   pop edi
// 007fdc2e  8bc6                 mov eax, esi
// 007fdc30  5e                   pop esi
// 007fdc31  c20400               ret 4
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
