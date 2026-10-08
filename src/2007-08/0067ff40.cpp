// from server: 100% by colin
// roc 2007-08 0067ff40  unit: CXTPPrintingDialog  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067ff40
//
// 0067ff40  56                   push esi
// 0067ff41  8bf1                 mov esi, ecx
// 0067ff43  56                   push esi
// 0067ff44  ff1554ec7700         call dword ptr [0x77ec54]
// 0067ff4a  8b442408             mov eax, dword ptr [esp + 8]
// 0067ff4e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0067ff51  56                   push esi
// 0067ff52  51                   push ecx
// 0067ff53  ff1550ec7700         call dword ptr [0x77ec50]
// 0067ff59  8bc6                 mov eax, esi
// 0067ff5b  5e                   pop esi
// 0067ff5c  c20400               ret 4

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
