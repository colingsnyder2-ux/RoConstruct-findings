// roc 2009-06 007622f0  unit: CXTPControlButtonColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007622f0
//
// 007622f0  56                   push esi
// 007622f1  57                   push edi
// 007622f2  8bf9                 mov edi, ecx
// 007622f4  e887ffffff           call 0x762280
// 007622f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007622fd  8bf0                 mov esi, eax
// 007622ff  8b06                 mov eax, dword ptr [esi]
// 00762301  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00762307  51                   push ecx
// 00762308  57                   push edi
// 00762309  8bce                 mov ecx, esi
// 0076230b  ffd2                 call edx
// 0076230d  5f                   pop edi
// 0076230e  8bc6                 mov eax, esi
// 00762310  5e                   pop esi
// 00762311  c20400               ret 4
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
