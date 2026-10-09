// roc 2008-06 00772e30  unit: CXTPControlCustom  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772e30
//
// 00772e30  56                   push esi
// 00772e31  57                   push edi
// 00772e32  8bf9                 mov edi, ecx
// 00772e34  e887ffffff           call 0x772dc0
// 00772e39  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00772e3d  8bf0                 mov esi, eax
// 00772e3f  8b06                 mov eax, dword ptr [esi]
// 00772e41  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00772e47  51                   push ecx
// 00772e48  57                   push edi
// 00772e49  8bce                 mov ecx, esi
// 00772e4b  ffd2                 call edx
// 00772e4d  5f                   pop edi
// 00772e4e  8bc6                 mov eax, esi
// 00772e50  5e                   pop esi
// 00772e51  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00003c@@QAEPAXPAX@Z)

namespace ns_ROCX00003c {
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
