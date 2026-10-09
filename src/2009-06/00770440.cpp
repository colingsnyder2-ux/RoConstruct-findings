// roc 2009-06 00770440  unit: CXTPPrintingDialog  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00770440
//
// 00770440  56                   push esi
// 00770441  57                   push edi
// 00770442  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00770446  57                   push edi
// 00770447  8bf1                 mov esi, ecx
// 00770449  ff15e0ed8900         call dword ptr [0x89ede0]
// 0077044f  56                   push esi
// 00770450  85c0                 test eax, eax
// 00770452  740e                 je 0x770462
// 00770454  57                   push edi
// 00770455  ff15f4ed8900         call dword ptr [0x89edf4]
// 0077045b  5f                   pop edi
// 0077045c  8bc6                 mov eax, esi
// 0077045e  5e                   pop esi
// 0077045f  c20400               ret 4
// 00770462  ff15c8ee8900         call dword ptr [0x89eec8]
// 00770468  5f                   pop edi
// 00770469  8bc6                 mov eax, esi
// 0077046b  5e                   pop esi
// 0077046c  c20400               ret 4
// copied from an identical function in another client (function ?sub_67FF70@CXTPPrintingDialog@ns_ROCX00005e@@QAEPAXPAX@Z)

namespace ns_ROCX00005e {
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
