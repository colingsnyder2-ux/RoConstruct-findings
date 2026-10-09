// roc 2010-06 00827600  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00827600
//
// 00827600  56                   push esi
// 00827601  57                   push edi
// 00827602  8bf9                 mov edi, ecx
// 00827604  e887ffffff           call 0x827590
// 00827609  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082760d  8bf0                 mov esi, eax
// 0082760f  8b06                 mov eax, dword ptr [esi]
// 00827611  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00827617  51                   push ecx
// 00827618  57                   push edi
// 00827619  8bce                 mov ecx, esi
// 0082761b  ffd2                 call edx
// 0082761d  5f                   pop edi
// 0082761e  8bc6                 mov eax, esi
// 00827620  5e                   pop esi
// 00827621  c20400               ret 4
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
