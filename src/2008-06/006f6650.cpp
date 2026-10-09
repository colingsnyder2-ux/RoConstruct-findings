// roc 2008-06 006f6650  unit: CXTPControlLabel  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6650
//
// 006f6650  56                   push esi
// 006f6651  57                   push edi
// 006f6652  8bf9                 mov edi, ecx
// 006f6654  e877ffffff           call 0x6f65d0
// 006f6659  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f665d  8bf0                 mov esi, eax
// 006f665f  8b06                 mov eax, dword ptr [esi]
// 006f6661  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006f6667  51                   push ecx
// 006f6668  57                   push edi
// 006f6669  8bce                 mov ecx, esi
// 006f666b  ffd2                 call edx
// 006f666d  5f                   pop edi
// 006f666e  8bc6                 mov eax, esi
// 006f6670  5e                   pop esi
// 006f6671  c20400               ret 4
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
