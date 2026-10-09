// roc 2009-06 008167c0  unit: CXTPRibbonControlSystemPopupBarListItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008167c0
//
// 008167c0  56                   push esi
// 008167c1  57                   push edi
// 008167c2  8bf9                 mov edi, ecx
// 008167c4  e887ffffff           call 0x816750
// 008167c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008167cd  8bf0                 mov esi, eax
// 008167cf  8b06                 mov eax, dword ptr [esi]
// 008167d1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008167d7  51                   push ecx
// 008167d8  57                   push edi
// 008167d9  8bce                 mov ecx, esi
// 008167db  ffd2                 call edx
// 008167dd  5f                   pop edi
// 008167de  8bc6                 mov eax, esi
// 008167e0  5e                   pop esi
// 008167e1  c20400               ret 4
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
