// roc 2010-06 007fca60  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fca60
//
// 007fca60  56                   push esi
// 007fca61  57                   push edi
// 007fca62  8bf9                 mov edi, ecx
// 007fca64  e887ffffff           call 0x7fc9f0
// 007fca69  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fca6d  8bf0                 mov esi, eax
// 007fca6f  8b06                 mov eax, dword ptr [esi]
// 007fca71  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007fca77  51                   push ecx
// 007fca78  57                   push edi
// 007fca79  8bce                 mov ecx, esi
// 007fca7b  ffd2                 call edx
// 007fca7d  5f                   pop edi
// 007fca7e  8bc6                 mov eax, esi
// 007fca80  5e                   pop esi
// 007fca81  c20400               ret 4
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
