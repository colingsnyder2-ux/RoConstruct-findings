// roc 2009-06 00761230  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761230
//
// 00761230  83791002             cmp dword ptr [ecx + 0x10], 2
// 00761234  7513                 jne 0x761249
// 00761236  6a01                 push 1
// 00761238  6a05                 push 5
// 0076123a  e8c1f7ffff           call 0x760a00
// 0076123f  84c0                 test al, al
// 00761241  7406                 je 0x761249
// 00761243  b801000000           mov eax, 1
// 00761248  c3                   ret 
// 00761249  33c0                 xor eax, eax
// 0076124b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000013@@QAEHXZ)

namespace ns_ROCX000013 {
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
