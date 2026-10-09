// roc 2007-03 0066b830  unit: seg_00660000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066b830
//
// 0066b830  56                   push esi
// 0066b831  57                   push edi
// 0066b832  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066b836  57                   push edi
// 0066b837  8bf1                 mov esi, ecx
// 0066b839  ff1574ed7700         call dword ptr [0x77ed74]
// 0066b83f  85c0                 test eax, eax
// 0066b841  56                   push esi
// 0066b842  740e                 je 0x66b852
// 0066b844  57                   push edi
// 0066b845  ff153ced7700         call dword ptr [0x77ed3c]
// 0066b84b  5f                   pop edi
// 0066b84c  8bc6                 mov eax, esi
// 0066b84e  5e                   pop esi
// 0066b84f  c20400               ret 4
// 0066b852  ff1514ef7700         call dword ptr [0x77ef14]
// 0066b858  5f                   pop edi
// 0066b859  8bc6                 mov eax, esi
// 0066b85b  5e                   pop esi
// 0066b85c  c20400               ret 4
// copied from an identical function in another client (function ?sub_67FF70@CXTPPrintingDialog@ns_ROCX000036@@QAEPAXPAX@Z)

namespace ns_ROCX000036 {
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
