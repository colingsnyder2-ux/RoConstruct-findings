// roc 2010-06 007fe010  unit: CXTPControlSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fe010
//
// 007fe010  56                   push esi
// 007fe011  57                   push edi
// 007fe012  8bf9                 mov edi, ecx
// 007fe014  e887ffffff           call 0x7fdfa0
// 007fe019  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fe01d  8bf0                 mov esi, eax
// 007fe01f  8b06                 mov eax, dword ptr [esi]
// 007fe021  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007fe027  51                   push ecx
// 007fe028  57                   push edi
// 007fe029  8bce                 mov ecx, esi
// 007fe02b  ffd2                 call edx
// 007fe02d  5f                   pop edi
// 007fe02e  8bc6                 mov eax, esi
// 007fe030  5e                   pop esi
// 007fe031  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002d@@QAEPAXPAX@Z)

namespace ns_ROCX00002d {
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
