// roc 2009-06 00770410  unit: CXTPPrintingDialog  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00770410
//
// 00770410  56                   push esi
// 00770411  8bf1                 mov esi, ecx
// 00770413  56                   push esi
// 00770414  ff152cee8900         call dword ptr [0x89ee2c]
// 0077041a  8b442408             mov eax, dword ptr [esp + 8]
// 0077041e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00770421  56                   push esi
// 00770422  51                   push ecx
// 00770423  ff1530ee8900         call dword ptr [0x89ee30]
// 00770429  8bc6                 mov eax, esi
// 0077042b  5e                   pop esi
// 0077042c  c20400               ret 4
// copied from an identical function in another client (function ?SetPos@CXTPPrintingDialog@ns_ROCX00005d@@QAEPAXPAX@Z)

namespace ns_ROCX00005d {
struct CXTPPrintingDialog {
    void* SetPos(void* p);
};

extern "C" {
    int (__stdcall *GetCursorPos)(void*);
    int (__stdcall *ScreenToClient)(void*, void*);
}

void* CXTPPrintingDialog::SetPos(void* p) {
    GetCursorPos(this);
    ScreenToClient(*(void**)((char*)p + 0x20), this);
    return this;
}
}
