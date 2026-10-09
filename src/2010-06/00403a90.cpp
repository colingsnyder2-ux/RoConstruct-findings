// roc 2010-06 00403a90  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00403a90
//
// 00403a90  8b01                 mov eax, dword ptr [ecx]
// 00403a92  50                   push eax
// 00403a93  ff1508aa9e00         call dword ptr [0x9eaa08]
// 00403a99  59                   pop ecx
// 00403a9a  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000063@@QAEXXZ)

namespace ns_ROCX000063 {
extern "C" void (*free)(void*);

struct S {
    void* p;
    void f();
};

void S::f() {
    free(p);
}
}
