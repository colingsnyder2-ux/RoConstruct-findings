// roc 2009-12 00699cf0  unit: RBX::Workspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00699cf0
//
// 00699cf0  8d81e0feffff         lea eax, [ecx - 0x120]
// 00699cf6  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000005@@QAEPADXZ)

namespace ns_ROCX000005 {
// from server: 100% by tester
struct S {
    char* f();
};

char* S::f() {
    return reinterpret_cast<char*>(this) - 0x120;
}
}
