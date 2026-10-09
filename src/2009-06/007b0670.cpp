// roc 2009-06 007b0670  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b0670
//
// 007b0670  56                   push esi
// 007b0671  57                   push edi
// 007b0672  8bf9                 mov edi, ecx
// 007b0674  e887ffffff           call 0x7b0600
// 007b0679  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b067d  8bf0                 mov esi, eax
// 007b067f  8b06                 mov eax, dword ptr [esi]
// 007b0681  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007b0687  51                   push ecx
// 007b0688  57                   push edi
// 007b0689  8bce                 mov ecx, esi
// 007b068b  ffd2                 call edx
// 007b068d  5f                   pop edi
// 007b068e  8bc6                 mov eax, esi
// 007b0690  5e                   pop esi
// 007b0691  c20400               ret 4
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
