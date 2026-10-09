// roc 2010-06 008444c0  unit: CXTPToolBar::CControlButtonHide  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008444c0
//
// 008444c0  56                   push esi
// 008444c1  57                   push edi
// 008444c2  8bf9                 mov edi, ecx
// 008444c4  e887ffffff           call 0x844450
// 008444c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008444cd  8bf0                 mov esi, eax
// 008444cf  8b06                 mov eax, dword ptr [esi]
// 008444d1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008444d7  51                   push ecx
// 008444d8  57                   push edi
// 008444d9  8bce                 mov ecx, esi
// 008444db  ffd2                 call edx
// 008444dd  5f                   pop edi
// 008444de  8bc6                 mov eax, esi
// 008444e0  5e                   pop esi
// 008444e1  c20400               ret 4
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
