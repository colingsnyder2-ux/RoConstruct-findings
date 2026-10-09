// roc 2011-06 00853140  unit: CXTPControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00853140
//
// 00853140  56                   push esi
// 00853141  57                   push edi
// 00853142  8bf9                 mov edi, ecx
// 00853144  e887ffffff           call 0x8530d0
// 00853149  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085314d  8bf0                 mov esi, eax
// 0085314f  8b06                 mov eax, dword ptr [esi]
// 00853151  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00853157  51                   push ecx
// 00853158  57                   push edi
// 00853159  8bce                 mov ecx, esi
// 0085315b  ffd2                 call edx
// 0085315d  5f                   pop edi
// 0085315e  8bc6                 mov eax, esi
// 00853160  5e                   pop esi
// 00853161  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002f@@QAEPAXPAX@Z)

namespace ns_ROCX00002f {
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
