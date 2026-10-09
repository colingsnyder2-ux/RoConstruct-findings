// roc 2009-12 00406870  unit: VCApp::?$CComObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406870
//
// 00406870  56                   push esi
// 00406871  8bf1                 mov esi, ecx
// 00406873  807e0400             cmp byte ptr [esi + 4], 0
// 00406877  740d                 je 0x406886
// 00406879  8b06                 mov eax, dword ptr [esi]
// 0040687b  50                   push eax
// 0040687c  ff1500b29800         call dword ptr [0x98b200]
// 00406882  c6460400             mov byte ptr [esi + 4], 0
// 00406886  5e                   pop esi
// 00406887  c3                   ret 
// copied from an identical function in another client (function ?Release@CNameItem@ns_ROCX000031@@QAEXXZ)

namespace ns_ROCX000031 {
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
