// roc 2008-06 006f7a70  unit: CXTPPrintingDialog  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f7a70
//
// 006f7a70  56                   push esi
// 006f7a71  8bf1                 mov esi, ecx
// 006f7a73  56                   push esi
// 006f7a74  ff159c2d8000         call dword ptr [0x802d9c]
// 006f7a7a  8b442408             mov eax, dword ptr [esp + 8]
// 006f7a7e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006f7a81  56                   push esi
// 006f7a82  51                   push ecx
// 006f7a83  ff15a02d8000         call dword ptr [0x802da0]
// 006f7a89  8bc6                 mov eax, esi
// 006f7a8b  5e                   pop esi
// 006f7a8c  c20400               ret 4
// copied from an identical function in another client (function ?SetPos@CXTPPrintingDialog@ns_ROCX000062@@QAEPAXPAX@Z)

namespace ns_ROCX000062 {
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
