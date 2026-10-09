// roc 2010-06 008a5e70  unit: CXTPRibbonControlSystemButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5e70
//
// 008a5e70  56                   push esi
// 008a5e71  57                   push edi
// 008a5e72  8bf9                 mov edi, ecx
// 008a5e74  e887ffffff           call 0x8a5e00
// 008a5e79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a5e7d  8bf0                 mov esi, eax
// 008a5e7f  8b06                 mov eax, dword ptr [esi]
// 008a5e81  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008a5e87  51                   push ecx
// 008a5e88  57                   push edi
// 008a5e89  8bce                 mov ecx, esi
// 008a5e8b  ffd2                 call edx
// 008a5e8d  5f                   pop edi
// 008a5e8e  8bc6                 mov eax, esi
// 008a5e90  5e                   pop esi
// 008a5e91  c20400               ret 4
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
