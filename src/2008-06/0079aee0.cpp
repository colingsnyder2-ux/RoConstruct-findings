// roc 2008-06 0079aee0  unit: CXTPRibbonControlSystemPopupBarButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079aee0
//
// 0079aee0  56                   push esi
// 0079aee1  57                   push edi
// 0079aee2  8bf9                 mov edi, ecx
// 0079aee4  e887ffffff           call 0x79ae70
// 0079aee9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079aeed  8bf0                 mov esi, eax
// 0079aeef  8b06                 mov eax, dword ptr [esi]
// 0079aef1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0079aef7  51                   push ecx
// 0079aef8  57                   push edi
// 0079aef9  8bce                 mov ecx, esi
// 0079aefb  ffd2                 call edx
// 0079aefd  5f                   pop edi
// 0079aefe  8bc6                 mov eax, esi
// 0079af00  5e                   pop esi
// 0079af01  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00003c@@QAEPAXPAX@Z)

namespace ns_ROCX00003c {
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
