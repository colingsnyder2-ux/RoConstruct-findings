// from server: 100% by colin
// roc 2007-08 0041db80  unit: CInstanceRecord::CNameItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041db80
//
// 0041db80  56                   push esi
// 0041db81  8bf1                 mov esi, ecx
// 0041db83  807e0400             cmp byte ptr [esi + 4], 0
// 0041db87  740d                 je 0x41db96
// 0041db89  8b06                 mov eax, dword ptr [esi]
// 0041db8b  50                   push eax
// 0041db8c  ff15f8d27700         call dword ptr [0x77d2f8]
// 0041db92  c6460400             mov byte ptr [esi + 4], 0
// 0041db96  5e                   pop esi
// 0041db97  c3                   ret 

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
