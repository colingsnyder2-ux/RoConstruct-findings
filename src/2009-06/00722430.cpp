// roc 2009-06 00722430  unit: CXTPControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00722430
//
// 00722430  56                   push esi
// 00722431  57                   push edi
// 00722432  8bf9                 mov edi, ecx
// 00722434  e887ffffff           call 0x7223c0
// 00722439  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072243d  8bf0                 mov esi, eax
// 0072243f  8b06                 mov eax, dword ptr [esi]
// 00722441  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00722447  51                   push ecx
// 00722448  57                   push edi
// 00722449  8bce                 mov ecx, esi
// 0072244b  ffd2                 call edx
// 0072244d  5f                   pop edi
// 0072244e  8bc6                 mov eax, esi
// 00722450  5e                   pop esi
// 00722451  c20400               ret 4
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
