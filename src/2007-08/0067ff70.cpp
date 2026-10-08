// from server: 100% by colin
// roc 2007-08 0067ff70  unit: CXTPPrintingDialog  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067ff70
//
// 0067ff70  56                   push esi
// 0067ff71  57                   push edi
// 0067ff72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0067ff76  57                   push edi
// 0067ff77  8bf1                 mov esi, ecx
// 0067ff79  ff15bced7700         call dword ptr [0x77edbc]
// 0067ff7f  85c0                 test eax, eax
// 0067ff81  56                   push esi
// 0067ff82  740e                 je 0x67ff92
// 0067ff84  57                   push edi
// 0067ff85  ff15d4ed7700         call dword ptr [0x77edd4]
// 0067ff8b  5f                   pop edi
// 0067ff8c  8bc6                 mov eax, esi
// 0067ff8e  5e                   pop esi
// 0067ff8f  c20400               ret 4
// 0067ff92  ff1514ee7700         call dword ptr [0x77ee14]
// 0067ff98  5f                   pop edi
// 0067ff99  8bc6                 mov eax, esi
// 0067ff9b  5e                   pop esi
// 0067ff9c  c20400               ret 4

extern "C" int (__stdcall *IsWindow)(void*);
extern "C" int (__stdcall *GetWindowRect)(void*, void*);
extern "C" int (__stdcall *SetRectEmpty)(void*);

struct CXTPPrintingDialog {
    void* sub_67FF70(void*);
};

void* CXTPPrintingDialog::sub_67FF70(void* param) {
    if (IsWindow(param)) {
        GetWindowRect(param, this);
    } else {
        SetRectEmpty(this);
    }
    return this;
}
