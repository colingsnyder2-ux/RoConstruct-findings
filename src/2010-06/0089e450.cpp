// roc 2010-06 0089e450  unit: CXTPRibbonGroupControlPopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089e450
//
// 0089e450  56                   push esi
// 0089e451  57                   push edi
// 0089e452  8bf9                 mov edi, ecx
// 0089e454  e887ffffff           call 0x89e3e0
// 0089e459  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089e45d  8bf0                 mov esi, eax
// 0089e45f  8b06                 mov eax, dword ptr [esi]
// 0089e461  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0089e467  51                   push ecx
// 0089e468  57                   push edi
// 0089e469  8bce                 mov ecx, esi
// 0089e46b  ffd2                 call edx
// 0089e46d  5f                   pop edi
// 0089e46e  8bc6                 mov eax, esi
// 0089e470  5e                   pop esi
// 0089e471  c20400               ret 4
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
