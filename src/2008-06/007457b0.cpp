// roc 2008-06 007457b0  unit: CXTPToolBar::CControlButtonHide  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007457b0
//
// 007457b0  56                   push esi
// 007457b1  57                   push edi
// 007457b2  8bf9                 mov edi, ecx
// 007457b4  e887ffffff           call 0x745740
// 007457b9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007457bd  8bf0                 mov esi, eax
// 007457bf  8b06                 mov eax, dword ptr [esi]
// 007457c1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007457c7  51                   push ecx
// 007457c8  57                   push edi
// 007457c9  8bce                 mov ecx, esi
// 007457cb  ffd2                 call edx
// 007457cd  5f                   pop edi
// 007457ce  8bc6                 mov eax, esi
// 007457d0  5e                   pop esi
// 007457d1  c20400               ret 4
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
