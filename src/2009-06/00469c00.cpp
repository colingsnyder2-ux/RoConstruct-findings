// roc 2009-06 00469c00  unit: DxUserInput  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00469c00
//
// 00469c00  56                   push esi
// 00469c01  8bf1                 mov esi, ecx
// 00469c03  807e0400             cmp byte ptr [esi + 4], 0
// 00469c07  740d                 je 0x469c16
// 00469c09  8b06                 mov eax, dword ptr [esi]
// 00469c0b  50                   push eax
// 00469c0c  ff15ace18900         call dword ptr [0x89e1ac]
// 00469c12  c6460400             mov byte ptr [esi + 4], 0
// 00469c16  5e                   pop esi
// 00469c17  c3                   ret 
// copied from an identical function in another client (function ?Release@CNameItem@ns_ROCX000061@@QAEXXZ)

namespace ns_ROCX000061 {
struct CNameItem {
    void* cs;
    unsigned char owned;
    void Release();
};

extern "C" void (__stdcall *LeaveCriticalSection)(void*);

void CNameItem::Release()
{
    if (owned) {
        LeaveCriticalSection(cs);
        owned = 0;
    }
}
}
