// roc 2011-06 0085cd00  unit: CXTPPrintingDialog  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085cd00
//
// 0085cd00  56                   push esi
// 0085cd01  57                   push edi
// 0085cd02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085cd06  57                   push edi
// 0085cd07  8bf1                 mov esi, ecx
// 0085cd09  ff15ec1ba400         call dword ptr [0xa41bec]
// 0085cd0f  56                   push esi
// 0085cd10  85c0                 test eax, eax
// 0085cd12  740e                 je 0x85cd22
// 0085cd14  57                   push edi
// 0085cd15  ff155c1ca400         call dword ptr [0xa41c5c]
// 0085cd1b  5f                   pop edi
// 0085cd1c  8bc6                 mov eax, esi
// 0085cd1e  5e                   pop esi
// 0085cd1f  c20400               ret 4
// 0085cd22  ff15ac19a400         call dword ptr [0xa419ac]
// 0085cd28  5f                   pop edi
// 0085cd29  8bc6                 mov eax, esi
// 0085cd2b  5e                   pop esi
// 0085cd2c  c20400               ret 4
// copied from an identical function in another client (function ?sub_67FF70@CXTPPrintingDialog@ns_ROCX000017@@QAEPAXPAX@Z)

namespace ns_ROCX000017 {
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
