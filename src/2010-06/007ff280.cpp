// roc 2010-06 007ff280  unit: CXTPPrintingDialog  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ff280
//
// 007ff280  56                   push esi
// 007ff281  57                   push edi
// 007ff282  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007ff286  57                   push edi
// 007ff287  8bf1                 mov esi, ecx
// 007ff289  ff1528bc9e00         call dword ptr [0x9ebc28]
// 007ff28f  56                   push esi
// 007ff290  85c0                 test eax, eax
// 007ff292  740e                 je 0x7ff2a2
// 007ff294  57                   push edi
// 007ff295  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 007ff29b  5f                   pop edi
// 007ff29c  8bc6                 mov eax, esi
// 007ff29e  5e                   pop esi
// 007ff29f  c20400               ret 4
// 007ff2a2  ff15e4ba9e00         call dword ptr [0x9ebae4]
// 007ff2a8  5f                   pop edi
// 007ff2a9  8bc6                 mov eax, esi
// 007ff2ab  5e                   pop esi
// 007ff2ac  c20400               ret 4
// copied from an identical function in another client (function ?sub_67FF70@CXTPPrintingDialog@ns_ROCX00002a@@QAEPAXPAX@Z)

namespace ns_ROCX00002a {
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
