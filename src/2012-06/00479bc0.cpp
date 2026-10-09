// roc 2012-06 00479bc0  unit: CRobloxControlMaterialSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00479bc0
//
// 00479bc0  56                   push esi
// 00479bc1  57                   push edi
// 00479bc2  8bf9                 mov edi, ecx
// 00479bc4  e897ffffff           call 0x479b60
// 00479bc9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00479bcd  8bf0                 mov esi, eax
// 00479bcf  8b06                 mov eax, dword ptr [esi]
// 00479bd1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00479bd7  51                   push ecx
// 00479bd8  57                   push edi
// 00479bd9  8bce                 mov ecx, esi
// 00479bdb  ffd2                 call edx
// 00479bdd  5f                   pop edi
// 00479bde  8bc6                 mov eax, esi
// 00479be0  5e                   pop esi
// 00479be1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000024@@QAEPAXPAX@Z)

namespace ns_ROCX000024 {
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
