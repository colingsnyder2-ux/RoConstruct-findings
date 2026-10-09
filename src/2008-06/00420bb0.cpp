// roc 2008-06 00420bb0  unit: CInstanceRecord::CNameItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420bb0
//
// 00420bb0  56                   push esi
// 00420bb1  8bf1                 mov esi, ecx
// 00420bb3  807e0400             cmp byte ptr [esi + 4], 0
// 00420bb7  740d                 je 0x420bc6
// 00420bb9  8b06                 mov eax, dword ptr [esi]
// 00420bbb  50                   push eax
// 00420bbc  ff15f4218000         call dword ptr [0x8021f4]
// 00420bc2  c6460400             mov byte ptr [esi + 4], 0
// 00420bc6  5e                   pop esi
// 00420bc7  c3                   ret 
// copied from an identical function in another client (function ?Release@CNameItem@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
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
