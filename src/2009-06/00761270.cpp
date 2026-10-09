// roc 2009-06 00761270  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761270
//
// 00761270  83791002             cmp dword ptr [ecx + 0x10], 2
// 00761274  7213                 jb 0x761289
// 00761276  6a00                 push 0
// 00761278  6a06                 push 6
// 0076127a  e851f7ffff           call 0x7609d0
// 0076127f  84c0                 test al, al
// 00761281  7406                 je 0x761289
// 00761283  b801000000           mov eax, 1
// 00761288  c3                   ret 
// 00761289  33c0                 xor eax, eax
// 0076128b  c3                   ret 
// copied from an identical function in another client (function ?f@CPropertyGridItemBrickColor@ns_ROCX000015@@QAEHXZ)

namespace ns_ROCX000015 {
struct CPropertyGridItemBrickColor {
    char pad_0[0x10];
    unsigned int field_10;
    bool sub_6711c0(int, int);
    int f();
};

int CPropertyGridItemBrickColor::f() {
    if (field_10 >= 2) {
        if (sub_6711c0(6, 0))
            return 1;
    }
    return 0;
}
}
