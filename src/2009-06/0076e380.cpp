// roc 2009-06 0076e380  unit: CXTPControlOleItems  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076e380
//
// 0076e380  56                   push esi
// 0076e381  57                   push edi
// 0076e382  8bf9                 mov edi, ecx
// 0076e384  e887ffffff           call 0x76e310
// 0076e389  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076e38d  8bf0                 mov esi, eax
// 0076e38f  8b06                 mov eax, dword ptr [esi]
// 0076e391  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0076e397  51                   push ecx
// 0076e398  57                   push edi
// 0076e399  8bce                 mov ecx, esi
// 0076e39b  ffd2                 call edx
// 0076e39d  5f                   pop edi
// 0076e39e  8bc6                 mov eax, esi
// 0076e3a0  5e                   pop esi
// 0076e3a1  c20400               ret 4
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
