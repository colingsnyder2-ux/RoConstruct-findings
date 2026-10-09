// roc 2009-12 0083d7c0  unit: CXTPControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083d7c0
//
// 0083d7c0  56                   push esi
// 0083d7c1  57                   push edi
// 0083d7c2  8bf9                 mov edi, ecx
// 0083d7c4  e887ffffff           call 0x83d750
// 0083d7c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083d7cd  8bf0                 mov esi, eax
// 0083d7cf  8b06                 mov eax, dword ptr [esi]
// 0083d7d1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0083d7d7  51                   push ecx
// 0083d7d8  57                   push edi
// 0083d7d9  8bce                 mov ecx, esi
// 0083d7db  ffd2                 call edx
// 0083d7dd  5f                   pop edi
// 0083d7de  8bc6                 mov eax, esi
// 0083d7e0  5e                   pop esi
// 0083d7e1  c20400               ret 4
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
