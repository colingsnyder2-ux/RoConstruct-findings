// roc 2009-12 00850fc0  unit: CXTPPropExchangeXMLNode  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850fc0
//
// 00850fc0  8b01                 mov eax, dword ptr [ecx]
// 00850fc2  50                   push eax
// 00850fc3  ff1540b79800         call dword ptr [0x98b740]
// 00850fc9  59                   pop ecx
// 00850fca  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000067@@QAEXXZ)

namespace ns_ROCX000067 {
extern "C" void (*free)(void*);

struct S {
    void* p;
    void f();
};

void S::f() {
    free(p);
}
}
