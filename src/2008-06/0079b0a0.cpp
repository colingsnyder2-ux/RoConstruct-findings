// roc 2008-06 0079b0a0  unit: CXTPRibbonControlSystemPopupBarListItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079b0a0
//
// 0079b0a0  56                   push esi
// 0079b0a1  57                   push edi
// 0079b0a2  8bf9                 mov edi, ecx
// 0079b0a4  e887ffffff           call 0x79b030
// 0079b0a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079b0ad  8bf0                 mov esi, eax
// 0079b0af  8b06                 mov eax, dword ptr [esi]
// 0079b0b1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0079b0b7  51                   push ecx
// 0079b0b8  57                   push edi
// 0079b0b9  8bce                 mov ecx, esi
// 0079b0bb  ffd2                 call edx
// 0079b0bd  5f                   pop edi
// 0079b0be  8bc6                 mov eax, esi
// 0079b0c0  5e                   pop esi
// 0079b0c1  c20400               ret 4
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
