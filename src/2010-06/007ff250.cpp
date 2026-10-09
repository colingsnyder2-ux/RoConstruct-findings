// roc 2010-06 007ff250  unit: CXTPPrintingDialog  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ff250
//
// 007ff250  56                   push esi
// 007ff251  8bf1                 mov esi, ecx
// 007ff253  56                   push esi
// 007ff254  ff1574bc9e00         call dword ptr [0x9ebc74]
// 007ff25a  8b442408             mov eax, dword ptr [esp + 8]
// 007ff25e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007ff261  56                   push esi
// 007ff262  51                   push ecx
// 007ff263  ff1578bc9e00         call dword ptr [0x9ebc78]
// 007ff269  8bc6                 mov eax, esi
// 007ff26b  5e                   pop esi
// 007ff26c  c20400               ret 4
// copied from an identical function in another client (function ?SetPos@CXTPPrintingDialog@ns_ROCX000029@@QAEPAXPAX@Z)

namespace ns_ROCX000029 {
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
