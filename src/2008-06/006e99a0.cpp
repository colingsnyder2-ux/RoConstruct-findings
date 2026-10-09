// roc 2008-06 006e99a0  unit: CXTPControlButtonColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e99a0
//
// 006e99a0  56                   push esi
// 006e99a1  57                   push edi
// 006e99a2  8bf9                 mov edi, ecx
// 006e99a4  e887ffffff           call 0x6e9930
// 006e99a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e99ad  8bf0                 mov esi, eax
// 006e99af  8b06                 mov eax, dword ptr [esi]
// 006e99b1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006e99b7  51                   push ecx
// 006e99b8  57                   push edi
// 006e99b9  8bce                 mov ecx, esi
// 006e99bb  ffd2                 call edx
// 006e99bd  5f                   pop edi
// 006e99be  8bc6                 mov eax, esi
// 006e99c0  5e                   pop esi
// 006e99c1  c20400               ret 4
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
