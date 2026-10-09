// roc 2009-06 0076f140  unit: CXTPControlRadioButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076f140
//
// 0076f140  56                   push esi
// 0076f141  57                   push edi
// 0076f142  8bf9                 mov edi, ecx
// 0076f144  e887ffffff           call 0x76f0d0
// 0076f149  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076f14d  8bf0                 mov esi, eax
// 0076f14f  8b06                 mov eax, dword ptr [esi]
// 0076f151  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0076f157  51                   push ecx
// 0076f158  57                   push edi
// 0076f159  8bce                 mov ecx, esi
// 0076f15b  ffd2                 call edx
// 0076f15d  5f                   pop edi
// 0076f15e  8bc6                 mov eax, esi
// 0076f160  5e                   pop esi
// 0076f161  c20400               ret 4
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
