// roc 2009-06 0076dfe0  unit: CXTPControlToolbars  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076dfe0
//
// 0076dfe0  56                   push esi
// 0076dfe1  57                   push edi
// 0076dfe2  8bf9                 mov edi, ecx
// 0076dfe4  e887ffffff           call 0x76df70
// 0076dfe9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076dfed  8bf0                 mov esi, eax
// 0076dfef  8b06                 mov eax, dword ptr [esi]
// 0076dff1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0076dff7  51                   push ecx
// 0076dff8  57                   push edi
// 0076dff9  8bce                 mov ecx, esi
// 0076dffb  ffd2                 call edx
// 0076dffd  5f                   pop edi
// 0076dffe  8bc6                 mov eax, esi
// 0076e000  5e                   pop esi
// 0076e001  c20400               ret 4
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
