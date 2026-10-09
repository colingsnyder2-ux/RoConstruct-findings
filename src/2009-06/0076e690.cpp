// roc 2009-06 0076e690  unit: CXTPControlRecentFileList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076e690
//
// 0076e690  56                   push esi
// 0076e691  57                   push edi
// 0076e692  8bf9                 mov edi, ecx
// 0076e694  e887ffffff           call 0x76e620
// 0076e699  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076e69d  8bf0                 mov esi, eax
// 0076e69f  8b06                 mov eax, dword ptr [esi]
// 0076e6a1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0076e6a7  51                   push ecx
// 0076e6a8  57                   push edi
// 0076e6a9  8bce                 mov ecx, esi
// 0076e6ab  ffd2                 call edx
// 0076e6ad  5f                   pop edi
// 0076e6ae  8bc6                 mov eax, esi
// 0076e6b0  5e                   pop esi
// 0076e6b1  c20400               ret 4
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
