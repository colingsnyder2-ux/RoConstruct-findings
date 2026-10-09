// roc 2010-06 008a4ac0  unit: CXTPRibbonControlTab  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a4ac0
//
// 008a4ac0  56                   push esi
// 008a4ac1  57                   push edi
// 008a4ac2  8bf9                 mov edi, ecx
// 008a4ac4  e887ffffff           call 0x8a4a50
// 008a4ac9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a4acd  8bf0                 mov esi, eax
// 008a4acf  8b06                 mov eax, dword ptr [esi]
// 008a4ad1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008a4ad7  51                   push ecx
// 008a4ad8  57                   push edi
// 008a4ad9  8bce                 mov ecx, esi
// 008a4adb  ffd2                 call edx
// 008a4add  5f                   pop edi
// 008a4ade  8bc6                 mov eax, esi
// 008a4ae0  5e                   pop esi
// 008a4ae1  c20400               ret 4
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
