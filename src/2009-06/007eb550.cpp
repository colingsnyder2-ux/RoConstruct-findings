// roc 2009-06 007eb550  unit: CXTPControlCustom  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb550
//
// 007eb550  56                   push esi
// 007eb551  57                   push edi
// 007eb552  8bf9                 mov edi, ecx
// 007eb554  e887ffffff           call 0x7eb4e0
// 007eb559  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007eb55d  8bf0                 mov esi, eax
// 007eb55f  8b06                 mov eax, dword ptr [esi]
// 007eb561  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007eb567  51                   push ecx
// 007eb568  57                   push edi
// 007eb569  8bce                 mov ecx, esi
// 007eb56b  ffd2                 call edx
// 007eb56d  5f                   pop edi
// 007eb56e  8bc6                 mov eax, esi
// 007eb570  5e                   pop esi
// 007eb571  c20400               ret 4
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
