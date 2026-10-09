// roc 2007-03 00666440  unit: seg_00660000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00666440
//
// 00666440  b801000000           mov eax, 1
// 00666445  894134               mov dword ptr [ecx + 0x34], eax
// 00666448  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000002@@QAEHXZ)

namespace ns_ROCX000002 {
struct S {
    int pad[13];
    int value;
    int f();
};

int S::f() {
    value = 1;
    return 1;
}
}
