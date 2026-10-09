// roc 2011-06 008ff4c0  unit: CXTPRibbonControlSystemRecentFileList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ff4c0
//
// 008ff4c0  56                   push esi
// 008ff4c1  57                   push edi
// 008ff4c2  8bf9                 mov edi, ecx
// 008ff4c4  e887ffffff           call 0x8ff450
// 008ff4c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ff4cd  8bf0                 mov esi, eax
// 008ff4cf  8b06                 mov eax, dword ptr [esi]
// 008ff4d1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008ff4d7  51                   push ecx
// 008ff4d8  57                   push edi
// 008ff4d9  8bce                 mov ecx, esi
// 008ff4db  ffd2                 call edx
// 008ff4dd  5f                   pop edi
// 008ff4de  8bc6                 mov eax, esi
// 008ff4e0  5e                   pop esi
// 008ff4e1  c20400               ret 4
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
