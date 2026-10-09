// roc 2008-06 006fd900  unit: CXTCaptionButtonTheme  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd900
//
// 006fd900  8b01                 mov eax, dword ptr [ecx]
// 006fd902  50                   push eax
// 006fd903  ff15c0288000         call dword ptr [0x8028c0]
// 006fd909  59                   pop ecx
// 006fd90a  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
extern "C" void (*free)(void*);

struct S {
    void* p;
    void f();
};

void S::f() {
    free(p);
}
}
