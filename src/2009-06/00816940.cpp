// roc 2009-06 00816940  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00816940
//
// 00816940  56                   push esi
// 00816941  57                   push edi
// 00816942  8bf9                 mov edi, ecx
// 00816944  e887ffffff           call 0x8168d0
// 00816949  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081694d  8bf0                 mov esi, eax
// 0081694f  8b06                 mov eax, dword ptr [esi]
// 00816951  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00816957  51                   push ecx
// 00816958  57                   push edi
// 00816959  8bce                 mov ecx, esi
// 0081695b  ffd2                 call edx
// 0081695d  5f                   pop edi
// 0081695e  8bc6                 mov eax, esi
// 00816960  5e                   pop esi
// 00816961  c20400               ret 4
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
