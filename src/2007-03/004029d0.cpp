// roc 2007-03 004029d0  unit: seg_00400000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004029d0
//
// 004029d0  56                   push esi
// 004029d1  8bf1                 mov esi, ecx
// 004029d3  807e0400             cmp byte ptr [esi + 4], 0
// 004029d7  740d                 je 0x4029e6
// 004029d9  8b06                 mov eax, dword ptr [esi]
// 004029db  50                   push eax
// 004029dc  ff15b8d27700         call dword ptr [0x77d2b8]
// 004029e2  c6460400             mov byte ptr [esi + 4], 0
// 004029e6  5e                   pop esi
// 004029e7  c3                   ret 
// copied from an identical function in another client (function ?Release@CNameItem@ns_ROCX000032@@QAEXXZ)

namespace ns_ROCX000032 {
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
