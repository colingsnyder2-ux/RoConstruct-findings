// roc 2009-12 0084b210  unit: CXTPPrintingDialog  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084b210
//
// 0084b210  56                   push esi
// 0084b211  8bf1                 mov esi, ecx
// 0084b213  56                   push esi
// 0084b214  ff1538cc9800         call dword ptr [0x98cc38]
// 0084b21a  8b442408             mov eax, dword ptr [esp + 8]
// 0084b21e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0084b221  56                   push esi
// 0084b222  51                   push ecx
// 0084b223  ff1534cc9800         call dword ptr [0x98cc34]
// 0084b229  8bc6                 mov eax, esi
// 0084b22b  5e                   pop esi
// 0084b22c  c20400               ret 4
// copied from an identical function in another client (function ?SetPos@CXTPPrintingDialog@ns_ROCX00002d@@QAEPAXPAX@Z)

namespace ns_ROCX00002d {
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
