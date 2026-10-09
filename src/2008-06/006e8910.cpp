// roc 2008-06 006e8910  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8910
//
// 006e8910  83791002             cmp dword ptr [ecx + 0x10], 2
// 006e8914  7513                 jne 0x6e8929
// 006e8916  6a01                 push 1
// 006e8918  6a05                 push 5
// 006e891a  e8c1f7ffff           call 0x6e80e0
// 006e891f  84c0                 test al, al
// 006e8921  7406                 je 0x6e8929
// 006e8923  b801000000           mov eax, 1
// 006e8928  c3                   ret 
// 006e8929  33c0                 xor eax, eax
// 006e892b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000017@@QAEHXZ)

namespace ns_ROCX000017 {
struct CPropertyGridItemBrickColor {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    bool check(int a, int b);
    int method();
};

int CPropertyGridItemBrickColor::method() {
    if (field10 == 2) {
        if (check(5, 1)) {
            return 1;
        }
    }
    return 0;
}
}
