// roc 2009-12 00657d20  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00657d20
//
// 00657d20  8d816cffffff         lea eax, [ecx - 0x94]
// 00657d26  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAEPADXZ)

namespace ns_ROCX000000 {
// from server: 100% by tester
struct S {
    char* f();
};

char* S::f() {
    return reinterpret_cast<char*>(this) - 0x94;
}
}
