// roc 2007-03 00686610  unit: seg_00680000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686610
//
// 00686610  83791002             cmp dword ptr [ecx + 0x10], 2
// 00686614  7513                 jne 0x686629
// 00686616  6a01                 push 1
// 00686618  6a05                 push 5
// 0068661a  e8a1f7ffff           call 0x685dc0
// 0068661f  84c0                 test al, al
// 00686621  7406                 je 0x686629
// 00686623  b801000000           mov eax, 1
// 00686628  c3                   ret 
// 00686629  33c0                 xor eax, eax
// 0068662b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX00000a@@QAEHXZ)

namespace ns_ROCX00000a {
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
