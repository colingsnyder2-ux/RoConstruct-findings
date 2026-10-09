// roc 2010-06 004067a0  unit: VCApp::?$CComObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004067a0
//
// 004067a0  56                   push esi
// 004067a1  8bf1                 mov esi, ecx
// 004067a3  807e0400             cmp byte ptr [esi + 4], 0
// 004067a7  740d                 je 0x4067b6
// 004067a9  8b06                 mov eax, dword ptr [esi]
// 004067ab  50                   push eax
// 004067ac  ff1570a39e00         call dword ptr [0x9ea370]
// 004067b2  c6460400             mov byte ptr [esi + 4], 0
// 004067b6  5e                   pop esi
// 004067b7  c3                   ret 
// copied from an identical function in another client (function ?Release@CNameItem@ns_ROCX00002d@@QAEXXZ)

namespace ns_ROCX00002d {
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
