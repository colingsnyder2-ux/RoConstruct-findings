// roc 2008-06 006f7aa0  unit: CXTPPrintingDialog  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f7aa0
//
// 006f7aa0  56                   push esi
// 006f7aa1  57                   push edi
// 006f7aa2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f7aa6  57                   push edi
// 006f7aa7  8bf1                 mov esi, ecx
// 006f7aa9  ff15502d8000         call dword ptr [0x802d50]
// 006f7aaf  56                   push esi
// 006f7ab0  85c0                 test eax, eax
// 006f7ab2  740e                 je 0x6f7ac2
// 006f7ab4  57                   push edi
// 006f7ab5  ff15342e8000         call dword ptr [0x802e34]
// 006f7abb  5f                   pop edi
// 006f7abc  8bc6                 mov eax, esi
// 006f7abe  5e                   pop esi
// 006f7abf  c20400               ret 4
// 006f7ac2  ff157c2c8000         call dword ptr [0x802c7c]
// 006f7ac8  5f                   pop edi
// 006f7ac9  8bc6                 mov eax, esi
// 006f7acb  5e                   pop esi
// 006f7acc  c20400               ret 4
// copied from an identical function in another client (function ?sub_67FF70@CXTPPrintingDialog@ns_ROCX000063@@QAEPAXPAX@Z)

namespace ns_ROCX000063 {
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
