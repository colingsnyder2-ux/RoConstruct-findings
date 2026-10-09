// roc 2010-06 007fce30  unit: CXTPControlToolbars  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fce30
//
// 007fce30  56                   push esi
// 007fce31  57                   push edi
// 007fce32  8bf9                 mov edi, ecx
// 007fce34  e887ffffff           call 0x7fcdc0
// 007fce39  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fce3d  8bf0                 mov esi, eax
// 007fce3f  8b06                 mov eax, dword ptr [esi]
// 007fce41  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007fce47  51                   push ecx
// 007fce48  57                   push edi
// 007fce49  8bce                 mov ecx, esi
// 007fce4b  ffd2                 call edx
// 007fce4d  5f                   pop edi
// 007fce4e  8bc6                 mov eax, esi
// 007fce50  5e                   pop esi
// 007fce51  c20400               ret 4
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
