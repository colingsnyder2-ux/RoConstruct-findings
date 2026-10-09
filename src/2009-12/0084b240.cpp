// roc 2009-12 0084b240  unit: CXTPPrintingDialog  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084b240
//
// 0084b240  56                   push esi
// 0084b241  57                   push edi
// 0084b242  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084b246  57                   push edi
// 0084b247  8bf1                 mov esi, ecx
// 0084b249  ff1584cc9800         call dword ptr [0x98cc84]
// 0084b24f  56                   push esi
// 0084b250  85c0                 test eax, eax
// 0084b252  740e                 je 0x84b262
// 0084b254  57                   push edi
// 0084b255  ff1570cc9800         call dword ptr [0x98cc70]
// 0084b25b  5f                   pop edi
// 0084b25c  8bc6                 mov eax, esi
// 0084b25e  5e                   pop esi
// 0084b25f  c20400               ret 4
// 0084b262  ff159cca9800         call dword ptr [0x98ca9c]
// 0084b268  5f                   pop edi
// 0084b269  8bc6                 mov eax, esi
// 0084b26b  5e                   pop esi
// 0084b26c  c20400               ret 4
// copied from an identical function in another client (function ?sub_67FF70@CXTPPrintingDialog@ns_ROCX00002e@@QAEPAXPAX@Z)

namespace ns_ROCX00002e {
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
}
