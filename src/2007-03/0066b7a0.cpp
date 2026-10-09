// roc 2007-03 0066b7a0  unit: seg_00660000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066b7a0
//
// 0066b7a0  56                   push esi
// 0066b7a1  57                   push edi
// 0066b7a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066b7a6  57                   push edi
// 0066b7a7  8bf1                 mov esi, ecx
// 0066b7a9  ff1574ed7700         call dword ptr [0x77ed74]
// 0066b7af  85c0                 test eax, eax
// 0066b7b1  56                   push esi
// 0066b7b2  740e                 je 0x66b7c2
// 0066b7b4  57                   push edi
// 0066b7b5  ff155ced7700         call dword ptr [0x77ed5c]
// 0066b7bb  5f                   pop edi
// 0066b7bc  8bc6                 mov eax, esi
// 0066b7be  5e                   pop esi
// 0066b7bf  c20400               ret 4
// 0066b7c2  ff1514ef7700         call dword ptr [0x77ef14]
// 0066b7c8  5f                   pop edi
// 0066b7c9  8bc6                 mov eax, esi
// 0066b7cb  5e                   pop esi
// 0066b7cc  c20400               ret 4
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
