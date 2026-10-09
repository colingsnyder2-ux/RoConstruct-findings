// roc 2010-06 007b6ac0  unit: CXTPControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b6ac0
//
// 007b6ac0  56                   push esi
// 007b6ac1  57                   push edi
// 007b6ac2  8bf9                 mov edi, ecx
// 007b6ac4  e887ffffff           call 0x7b6a50
// 007b6ac9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b6acd  8bf0                 mov esi, eax
// 007b6acf  8b06                 mov eax, dword ptr [esi]
// 007b6ad1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007b6ad7  51                   push ecx
// 007b6ad8  57                   push edi
// 007b6ad9  8bce                 mov ecx, esi
// 007b6adb  ffd2                 call edx
// 007b6add  5f                   pop edi
// 007b6ade  8bc6                 mov eax, esi
// 007b6ae0  5e                   pop esi
// 007b6ae1  c20400               ret 4
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
