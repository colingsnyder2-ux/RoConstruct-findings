// roc 2011-06 0085ccd0  unit: CXTPPrintingDialog  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085ccd0
//
// 0085ccd0  56                   push esi
// 0085ccd1  8bf1                 mov esi, ecx
// 0085ccd3  56                   push esi
// 0085ccd4  ff15c819a400         call dword ptr [0xa419c8]
// 0085ccda  8b442408             mov eax, dword ptr [esp + 8]
// 0085ccde  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0085cce1  56                   push esi
// 0085cce2  51                   push ecx
// 0085cce3  ff15f419a400         call dword ptr [0xa419f4]
// 0085cce9  8bc6                 mov eax, esi
// 0085cceb  5e                   pop esi
// 0085ccec  c20400               ret 4
// copied from an identical function in another client (function ?SetPos@CXTPPrintingDialog@ns_ROCX000016@@QAEPAXPAX@Z)

namespace ns_ROCX000016 {
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
