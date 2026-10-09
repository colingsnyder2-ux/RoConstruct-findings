// roc 2010-06 007f0db0  unit: CXTPControlPopupColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0db0
//
// 007f0db0  56                   push esi
// 007f0db1  57                   push edi
// 007f0db2  8bf9                 mov edi, ecx
// 007f0db4  e887ffffff           call 0x7f0d40
// 007f0db9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f0dbd  8bf0                 mov esi, eax
// 007f0dbf  8b06                 mov eax, dword ptr [esi]
// 007f0dc1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007f0dc7  51                   push ecx
// 007f0dc8  57                   push edi
// 007f0dc9  8bce                 mov ecx, esi
// 007f0dcb  ffd2                 call edx
// 007f0dcd  5f                   pop edi
// 007f0dce  8bc6                 mov eax, esi
// 007f0dd0  5e                   pop esi
// 007f0dd1  c20400               ret 4
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
