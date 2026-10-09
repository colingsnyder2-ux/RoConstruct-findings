// roc 2009-12 00849e30  unit: CXTPControlCheckBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00849e30
//
// 00849e30  56                   push esi
// 00849e31  57                   push edi
// 00849e32  8bf9                 mov edi, ecx
// 00849e34  e887ffffff           call 0x849dc0
// 00849e39  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00849e3d  8bf0                 mov esi, eax
// 00849e3f  8b06                 mov eax, dword ptr [esi]
// 00849e41  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00849e47  51                   push ecx
// 00849e48  57                   push edi
// 00849e49  8bce                 mov ecx, esi
// 00849e4b  ffd2                 call edx
// 00849e4d  5f                   pop edi
// 00849e4e  8bc6                 mov eax, esi
// 00849e50  5e                   pop esi
// 00849e51  c20400               ret 4
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
