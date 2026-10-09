// roc 2009-12 00849f70  unit: CXTPControlSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00849f70
//
// 00849f70  56                   push esi
// 00849f71  57                   push edi
// 00849f72  8bf9                 mov edi, ecx
// 00849f74  e887ffffff           call 0x849f00
// 00849f79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00849f7d  8bf0                 mov esi, eax
// 00849f7f  8b06                 mov eax, dword ptr [esi]
// 00849f81  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00849f87  51                   push ecx
// 00849f88  57                   push edi
// 00849f89  8bce                 mov ecx, esi
// 00849f8b  ffd2                 call edx
// 00849f8d  5f                   pop edi
// 00849f8e  8bc6                 mov eax, esi
// 00849f90  5e                   pop esi
// 00849f91  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000031@@QAEPAXPAX@Z)

namespace ns_ROCX000031 {
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
