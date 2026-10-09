// roc 2009-12 0088b4f0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b4f0
//
// 0088b4f0  56                   push esi
// 0088b4f1  57                   push edi
// 0088b4f2  8bf9                 mov edi, ecx
// 0088b4f4  e887ffffff           call 0x88b480
// 0088b4f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088b4fd  8bf0                 mov esi, eax
// 0088b4ff  8b06                 mov eax, dword ptr [esi]
// 0088b501  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0088b507  51                   push ecx
// 0088b508  57                   push edi
// 0088b509  8bce                 mov ecx, esi
// 0088b50b  ffd2                 call edx
// 0088b50d  5f                   pop edi
// 0088b50e  8bc6                 mov eax, esi
// 0088b510  5e                   pop esi
// 0088b511  c20400               ret 4
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
