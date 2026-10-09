// roc 2011-06 008fea00  unit: CXTPRibbonControlSystemButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fea00
//
// 008fea00  56                   push esi
// 008fea01  57                   push edi
// 008fea02  8bf9                 mov edi, ecx
// 008fea04  e887ffffff           call 0x8fe990
// 008fea09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008fea0d  8bf0                 mov esi, eax
// 008fea0f  8b06                 mov eax, dword ptr [esi]
// 008fea11  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008fea17  51                   push ecx
// 008fea18  57                   push edi
// 008fea19  8bce                 mov ecx, esi
// 008fea1b  ffd2                 call edx
// 008fea1d  5f                   pop edi
// 008fea1e  8bc6                 mov eax, esi
// 008fea20  5e                   pop esi
// 008fea21  c20400               ret 4
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
