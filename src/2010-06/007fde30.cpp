// roc 2010-06 007fde30  unit: CXTPControlLabel  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fde30
//
// 007fde30  56                   push esi
// 007fde31  57                   push edi
// 007fde32  8bf9                 mov edi, ecx
// 007fde34  e877ffffff           call 0x7fddb0
// 007fde39  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fde3d  8bf0                 mov esi, eax
// 007fde3f  8b06                 mov eax, dword ptr [esi]
// 007fde41  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007fde47  51                   push ecx
// 007fde48  57                   push edi
// 007fde49  8bce                 mov ecx, esi
// 007fde4b  ffd2                 call edx
// 007fde4d  5f                   pop edi
// 007fde4e  8bc6                 mov eax, esi
// 007fde50  5e                   pop esi
// 007fde51  c20400               ret 4
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
