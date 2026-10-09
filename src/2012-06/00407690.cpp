// roc 2012-06 00407690  unit: VCApp::?$CComObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407690
//
// 00407690  56                   push esi
// 00407691  8bf1                 mov esi, ecx
// 00407693  807e0400             cmp byte ptr [esi + 4], 0
// 00407697  740d                 je 0x4076a6
// 00407699  8b06                 mov eax, dword ptr [esi]
// 0040769b  50                   push eax
// 0040769c  ff15b421b200         call dword ptr [0xb221b4]
// 004076a2  c6460400             mov byte ptr [esi + 4], 0
// 004076a6  5e                   pop esi
// 004076a7  c3                   ret 
// copied from an identical function in another client (function ?Release@CNameItem@ns_ROCX000062@@QAEXXZ)

namespace ns_ROCX000062 {
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
