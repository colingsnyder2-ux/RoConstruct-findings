// roc 2007-03 0066b770  unit: seg_00660000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066b770
//
// 0066b770  56                   push esi
// 0066b771  8bf1                 mov esi, ecx
// 0066b773  56                   push esi
// 0066b774  ff1524ed7700         call dword ptr [0x77ed24]
// 0066b77a  8b442408             mov eax, dword ptr [esp + 8]
// 0066b77e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0066b781  56                   push esi
// 0066b782  51                   push ecx
// 0066b783  ff1520ed7700         call dword ptr [0x77ed20]
// 0066b789  8bc6                 mov eax, esi
// 0066b78b  5e                   pop esi
// 0066b78c  c20400               ret 4
// copied from an identical function in another client (function ?SetPos@CXTPPrintingDialog@ns_ROCX000035@@QAEPAXPAX@Z)

namespace ns_ROCX000035 {
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
