// roc 2009-12 008489c0  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008489c0
//
// 008489c0  56                   push esi
// 008489c1  57                   push edi
// 008489c2  8bf9                 mov edi, ecx
// 008489c4  e887ffffff           call 0x848950
// 008489c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008489cd  8bf0                 mov esi, eax
// 008489cf  8b06                 mov eax, dword ptr [esi]
// 008489d1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008489d7  51                   push ecx
// 008489d8  57                   push edi
// 008489d9  8bce                 mov ecx, esi
// 008489db  ffd2                 call edx
// 008489dd  5f                   pop edi
// 008489de  8bc6                 mov eax, esi
// 008489e0  5e                   pop esi
// 008489e1  c20400               ret 4
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
